```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findMinEvenNode(std::vector<int> arr) {
    std::vector<int> evenNodes;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenNodes.push_back(arr[i]);
        }
    }

    if (evenNodes.empty()) {
        return {};
    }

    int minEvenValue = *min_element(evenNodes.begin(), evenNodes.end());
    
    std::vector<std::pair<int, int>> result;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == minEvenValue) {
            result.push_back({minEvenValue, i});
        }
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element at index " << i << ": ";
        std::cin >> arr[i];
    }

    auto result = findMinEvenNode(arr);

    return 0;
}