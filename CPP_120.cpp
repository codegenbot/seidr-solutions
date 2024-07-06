#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    if(k > arr.size()) {
        throw std::runtime_error("k is greater than the size of the array");
    }
    std::sort(arr.begin(), arr.end());
    return {arr.begin(), arr.begin() + 1}; 
}

int main() {
    try {
        assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 7) , {});
        std::cout << "Test passed.\n";
    } catch(const std::exception& e) {
        std::cout << "Error: " << e.what() << '\n';
    }
    return 0;
}