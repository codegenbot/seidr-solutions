#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int idx = -1;

    for (int i = 0; i < vec.size() - 1; ++i) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            idx = i;
        }
    }

    return {std::vector<int>(vec.begin(), vec.begin() + idx), std::vector<int>(vec.begin() + idx, vec.end())};
}

int main() {
    int n;
    std::cin >> n;  
    std::vector<int> inputVec(n);
    for (auto& x : inputVec) {
        std::cin >> x;  
    }
    
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(inputVec);
    
    // Print the output vectors here
    
    return 0;
}