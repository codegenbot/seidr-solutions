#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for(int i = 0; i < k; i++) {
        auto it = *std::max_element(arr.begin(), arr.end());
        result.push_back(it);
        arr.erase(std::remove(arr.begin(), arr.end(), it), arr.end());
    }
    return result;

}

int main() {
    std::vector<int> test;
    int n, k;
    std::cout << "Enter the size of array: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element number " << (i+1) << ": ";
        int x;
        std::cin >> x;
        test.push_back(x);
    }
    std::cout << "Enter k: ";
    std::cin >> k;
    std::vector<int> result = maximum(test, k);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}