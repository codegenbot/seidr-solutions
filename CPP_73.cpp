#include <iostream>
#include <vector>

int smallest_change(std::vector<int> arr) {
    int left = 0, right = arr.size() - 1;
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
        if (arr[i] != arr[arr.size() - 1 - i]) {
            changes++;
        }
    }

    return changes;
}

int main() {
    std::vector<int> arr;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        arr.push_back(x);
    }

    int res = smallest_change(arr);

    std::cout << "Smallest change required: " << res << std::endl;

    return 0;
}