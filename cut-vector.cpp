```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> vec) {
    int minDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[0]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    std::vector<int> leftVec = std::vector<int>(vec.begin(), vec.begin() + cutIndex);
    std::vector<int> rightVec = std::vector<int>(vec.begin() + cutIndex, vec.end());

    return {leftVec, rightVec};
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(vec);

    std::cout << "[";
    for (int num : result.first) {
        std::cout << num << " ";
    }
    std::cout << "]" << std::endl;

    std::cout << "[";
    for (int num : result.second) {
        std::cout << num << " ";
    }
    std::cout << "0]" << std::endl;

    return 0;
}