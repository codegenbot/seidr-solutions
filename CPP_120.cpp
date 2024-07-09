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
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }
    std::cout << "Enter number of maximum elements to extract: ";
    std::cin >> k;
    
    std::vector<int> test = maximum(arr, k);
    for (int i : test) {
        std::cout << i << " ";
    }
    return 0;
}