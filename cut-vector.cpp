#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> vec) {
    int minDiff = INT_MAX;
    int splitIndex = -1;
    
    for (int i = 0; i < vec.size() - 1; ++i) {
        int diff = abs(vec[i] - vec[i + 1]);
        
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    return {std::vector<int>(vec.begin(), vec.begin() + splitIndex), 
            std::vector<int>(vec.begin() + splitIndex, vec.end())};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }

    auto result = cutVector(vec);

    for (const auto& num : result.first) {
        std::cout << num << ' ';
    }
    std::cout << '\n';

    for (const auto& num : result.second) {
        std::cout << num << ' ';
    }
    std::cout << '\n';
    
    return 0;
}