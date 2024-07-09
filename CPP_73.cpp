```cpp
#include <iostream>
#include <vector>
#include <string>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::string str = "";
    for (int i : arr) {
        str += std::to_string(i);
    }
    int left = 0, right = n - 1;
    int changes = 0;
    while (left < right) {
        if (str[left] != str[right]) {
            changes++;
            break;
        }
        left++;
        right--;
    }
    for (int i = left; i <= right; i++) {
        if (str[i] != str[n - i - 1]) {
            changes++;
        }
    }
    return changes;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    int result = smallest_change(arr);
    std::cout << "Smallest change: " << result << std::endl;
    return 0;
}