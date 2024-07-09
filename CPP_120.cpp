```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool std::vector<int>::issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
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
    std::cout << "Enter the size of array: ";
    std::cin >> n;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    for(int i=0; i<n; ++i) {
        arr.push_back(0); 
    }

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element at index " << i << ": ";
        std::cin >> arr[i];
    }

    std::vector<int> result = maximum(arr, k);
    std::cout << "Maximum elements: ";
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}