#include <iostream>
#include <vector>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    int left = 0, right = n - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            break;
        }
        left++;
        right--;
    }

    for (int i = left; i <= right; i++) {
        if (arr[i] != arr[n - i - 1]) {
            changes++;
        }
    }

    return changes;
}

int main() {
    int result = smallest_change({0, 1});
    return 0;
}