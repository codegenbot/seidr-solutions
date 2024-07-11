#include <iostream>
#include <vector>
#include <climits>
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
    std::vector<int> arr = {4, 7, 9, 2, 8, 6};
    auto result = cutVector(arr);
    
    for (int num : result.first) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    
    for (int num : result.second) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    
    return 0;
}