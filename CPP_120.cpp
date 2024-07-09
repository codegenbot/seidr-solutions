```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
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
    std::vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }
    
    std::cout << "Enter the value of k: ";
    std::cin >> k;
    
    std::vector<int> res = maximum(arr, k);
    for(int i = 0; i < k; i++) {
        if(issame(res, arr)) break;
        res = maximum(arr, k);
    }
    
    std::cout << "The maximum vector is: ";
    for(auto x : res) std::cout << x << " ";
    std::cout << std::endl;
    
    return 0;
}