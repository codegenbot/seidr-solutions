#include <vector>
#include <iostream>

int smallest_change(std::vector<int> arr) {
    int left = 0, right = arr.size() - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            for (int i = left; i <= right; i++) {
                if (arr[i] == arr[right]) {
                    std::swap(arr[i], arr[left]);
                    changes++;
                    break;
                }
            }
            left++;
            right--;
        } else {
            left++;
            right--;
        }
    }

    return changes;
}

int main() {
    int result = smallest_change(std::vector<int>({0, 1}));
    std::cout << result << '\n';
    return 0;
}