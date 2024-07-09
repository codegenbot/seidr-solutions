#include <vector>

using namespace std;

int smallest_change(vector<int> arr) {
    int left = 0, right = arr.size() - 1, count = 0;
    while (left < right) {
        if (arr[left] != arr[right]) {
            count++;
            if (arr[left + 1] == arr[right]) {
                right--;
            } else if (arr[left] == arr[right - 1]) {
                left++;
            } else {
                left++, right--;
            }
        } else {
            left++, right--;
        }
    }
    return count;
}

int main() {
    assert (smallest_change({0, 1}) == 1);
    return 0;
}