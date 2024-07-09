#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maxKItems(std::vector<int>& arr, int k) {
    std::vector<int> result;
    for(int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> test(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> test[i];
    }

    int k;
    std::cout << "Enter the number of maximum elements to remove: ";
    std::cin >> k;

    std::vector<int> result = maxKItems(test, k);

    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}