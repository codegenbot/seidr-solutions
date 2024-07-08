```cpp
#include <iostream>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

std::vector<std::pair<int, int>> findMinEvenNode(std::vector<int> arr) {
    std::vector<std::pair<int, int>> evenNodes;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenNodes.push_back({arr[i], i});
        }
    }

    if (evenNodes.empty()) {
        return {};
    }

    int minEvenValue = evenNodes[0].first;
    int minIndex = evenNodes[0].second;

    for (int i = 1; i < evenNodes.size(); i++) {
        if (evenNodes[i].first < minEvenValue) {
            minEvenValue = evenNodes[i].first;
            minIndex = evenNodes[i].second;
        } else if (evenNodes[i].first == minEvenValue) {
            minIndex = std::min(minIndex, evenNodes[i].second);
        }
    }

    std::vector<std::pair<int, int>> result;
    result.push_back({minEvenValue, minIndex});
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

    auto pluck(std::vector<int>& arr) -> std::vector<int> {
        std::vector<int> evenNums;
        for (int num : arr) {
            if (num % 2 == 0) {
                evenNums.push_back(num);
            }
        }
        return evenNums;
    }

    auto result = pluck(arr);

    assert(issame(result, {}));
    
    return 0;
}