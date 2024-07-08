#include <vector>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    int left = 0, right = n - 1;
    int changes = 0;
    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            left++;
            right--;
        } else {
            left++;
            right--;
        }
    }
    return (n % 2 == 0)? changes : 1 - changes;
}

int main() {
    std::vector<int> arr = {1, 0};
    int result = smallest_change(arr);
    return 0;
}