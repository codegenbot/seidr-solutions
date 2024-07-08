#include <iostream>
#include <vector>
#include <algorithm>

const std::vector<std::pair<int, int>>& findMinEvenNode(std::vector<int> arr) {
    std::vector<std::pair<int, int>> evenNodes(1);
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenNodes.push_back({arr[i], i});
        }
    }

    if (evenNodes.empty()) {
        return {};
    }

    int minEvenValue = *min_element(evenNodes.begin(), evenNodes.end())->first;
    
    std::vector<std::pair<int, int>> result;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == minEvenValue) {
            result.push_back({minEvenValue, i});
        }
    }

    return evenNodes;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Initialize the vector directly without specifying its size:
    std::vector<int> arr;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element at index " << i << ": ";
        int temp;
        std::cin >> temp;
        arr.push_back(temp);
    }

    auto result = findMinEvenNode(arr);

    if (!result.empty()) {
        for (auto& pair : result) {
            std::cout << "Index: " << pair.second << ", Value: " << pair.first << std::endl;
        }
    } else {
        std::cout << "No even numbers found" << std::endl;
    }

    return 0;
}