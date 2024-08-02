```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

int main() {
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
        std::vector<int> arr;
        int n, k;

        // Input
        std::cout << "Enter the number of elements: ";
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cout << "Enter element " << i + 1 << ": ";
            std::cin >> arr[i];
        }
        std::cout << "Enter k: ";
        std::cin >> k;

        // Process
        std::vector<int> res = maximum(arr, k);

        // Output
        std::cout << "Maximum elements are: ";
        for (int i = 0; i < k; i++) {
            std::cout << res[i] << " ";
        }
        std::cout << std::endl;

        return 0;
    }