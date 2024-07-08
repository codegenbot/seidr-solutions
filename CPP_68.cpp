#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::pair<int, int>> findMinEvenNode(std::vector<int> arr) {
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

    std::vector<int> arr;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element at index " << i << ": ";
        int temp;
        std::cin >> temp;
        arr.push_back(temp);
    }

    auto result = findMinEvenNode(arr);

    if(result.empty()) {
        std::cout << "No even nodes found." << std::endl;
    } else {
        for(const auto& pair : result) {
            std::cout << "Index of minimum even node: " << pair.second << ", Value: " << pair.first << std::endl;
        }
    }

    return 0;
}