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
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter " << n << " elements: ";
    std::vector<int> arr(n);
    for (auto &x : arr) {
        std::cin >> x;
    }
    std::cout << "Enter k: ";
    std::cin >> k;
    std::vector<int> res = maximum(arr, k);
    std::cout << "Maximum elements are: ";
    for (int i : res)
        std::cout << i << " ";
    return 0;
}