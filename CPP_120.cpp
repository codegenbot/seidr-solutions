```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> arrCopy = arr;
    std::sort(arrCopy.begin(), arrCopy.end());
    if (k > arrCopy.size()) {
        k = arrCopy.size();
    }
    std::vector<int> result(k);

    for (int i = 0; i < k; i++) {
        result[i] = arrCopy[n - k + i];
    }

    return result;
}

int main() {
    int n, k;
    std::cout << "Enter the size of array: ";
    if (!(std::cin >> n)) {
        std::cout << "Invalid input. Please enter a valid integer.\n";
        return 1;
    }
    std::cout << "Enter the value of k: ";
    if (!(std::cin >> k)) {
        std::cout << "Invalid input. Please enter a valid integer.\n";
        return 1;
    }

    if (k < 1) {
        std::cout << "Value of k should be greater than or equal to 1.\n";
        return 1;
    }

    if (k > n) {
        std::cout << "Array is empty or k is greater than array size.\n";
        return 1;
    }

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        if (!(std::cin >> arr[i])) {
            std::cout << "Invalid input. Please enter a valid integer.\n";
            return 1;
        }
    }

    if (!issame(std::vector<int>(), maximum(arr, k))) {
        std::cout << "Maximum top-k elements: ";
        for (int i = 0; i < k; i++) {
            std::cout << maximum(arr, k)[i] << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "Array is empty or k is greater than array size.\n";
    }

    return 0;
}