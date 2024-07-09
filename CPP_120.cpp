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
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> v(n);
    std::cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::cout << "Enter k: ";
    std::cin >> k;
    
    if(k > n) {
        std::cout << "k is greater than number of elements. Please choose a smaller value for k." << std::endl;
    } else {
        std::vector<int> res = maximum(v, k);
        std::cout << "The maximum numbers are: ";
        for(int i = 0; i < k; i++) {
            std::cout << res[i] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}