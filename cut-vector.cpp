#include <iostream>
#include <vector>
#include <numeric>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& arr) {
    int n = arr.size();
    int min_diff = INT_MAX;
    std::pair<std::vector<int>, std::vector<int>> result;
    
    for (int i = 1; i < n; i++) {
        int diff = std::abs(std::accumulate(arr.begin(), arr.begin()+i, 0) - std::accumulate(arr.begin()+i, arr.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            result.first = std::vector<int>(arr.begin(), arr.begin()+i);
            result.second = std::vector<int>(arr.begin()+i, arr.end());
        }
    }
    
    return result;
}

int main() {
    std::vector<int> arr = {1656, 1405, 5442, 871, 7852, 1210, 4110};

    auto subvectors = cutVector(arr);
    
    for (int num : subvectors.first) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    for (int num : subvectors.second) {
        std::cout << num << " ";
    }
    
    return 0;
}