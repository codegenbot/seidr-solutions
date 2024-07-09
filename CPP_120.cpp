#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for(int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;

}

int main() {
    int n, k;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    std::vector<int> arr(n);
    std::cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::cout << "Enter K: ";
    std::cin >> k;
    std::vector<int> result = maximum(arr, k);
    std::cout << "The first " << k << " maximum elements are: ";
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}