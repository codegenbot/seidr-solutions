#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
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
    
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    
    if (k > n) {
        k = n;
    }
    
    std::vector<int> res = maximum(arr, k);
    
    if (!issame(res, arr)) {
        for (int i = 0; i < n - k; i++) {
            res.push_back(arr[i]);
        }
    }
    
    for (int i = 0; i < k; i++) {
        std::cout << "Maximum element at position: " << i + 1 << " is " << res[i] << std::endl;
    }
    return 0;
}