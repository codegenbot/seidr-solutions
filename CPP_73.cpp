#include <vector>

int smallest_change(std::vector<int> arr) {
    int left = 0, right = arr.size() - 1, count = 0;
    while (left < right) {
        if (arr[left] != arr[right]) {
            count++;
            if (left + 1 >= right) {
                right--;
            } else if (right - 1 <= left) {
                left++;
            } else if (arr[left + 1] == arr[right - 1]) {
                right--;
            } else {
                left++;
            }
        } else {
            left++, right--;
        }
    }
    return count;
}