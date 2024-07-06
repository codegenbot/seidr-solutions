```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int main() {
    int n, k;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;
    std::cout << "Enter the number to keep: ";
    std::cin >> k;

    if (n <= 0) {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        return -1;
    }

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::vector<int> maxK = maximum(arr, k);

    if (!maxK.empty()) {
        std::cout << "Maximum " << k << " elements: ";
        for (int i : maxK) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Not enough elements to keep." << std::endl;
    }

    return 0;
}