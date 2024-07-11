```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int splitIndex = -1;

    for (int i = 0; i < vec.size() - 1; ++i) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j <= i; ++j)
            leftSum += vec[j];
        for (int j = i + 1; j < vec.size(); ++j)
            rightSum += vec[j];

        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    std::vector<int> leftVec(0);
    for (int i = 0; i <= splitIndex; ++i)
        leftVec.push_back(vec[i]);
    
    std::vector<int> rightVec(0);
    for (int i = splitIndex + 1; i < vec.size(); ++i)
        rightVec.push_back(vec[i]);

    return {leftVec, rightVec};
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n+1);
    for (int i = 0; i <= n; ++i)
        std::cin >> vec[i];
    
    std::pair<std::vector<int>, std::vector<int>> res = cutVector(vec);
    
    std::cout << "[";
    for (int num : res.first) {
        std::cout << num;
        if (&num != &res.first.back())
            std::cout << " ";
    }
    std::cout << "] [";

    for (int num : res.second) {
        std::cout << num;
        if (&num != &res.second.back())
            std::cout << " ";
    }
    
    std::cout << "]" << std::endl;
    
}