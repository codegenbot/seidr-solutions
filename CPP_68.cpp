```
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

std::pair<int, int> pluck(std::vector<std::pair<int, int>> vec, int index) {
    if(index >= 0 && index < vec.size()) {
        return vec.at(index);
    } else {
        return {{}, -1}; // default pair with zero values
    }
}

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

    return 0;
}