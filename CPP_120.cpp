```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int main() {
    int n, k;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }

    std::vector<int> result = maximum(arr, k);

    std::cout << "Maximum elements are: ";
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}