#include <vector>
#include <cassert>

bool std::issame(std::vector<int> a, std::vector<int> b){
    return std::vector<int>(a.begin(), a.begin() + b.size()) == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> result;
    for (int i = 0; i < k; ++i){
        for (const auto& row : grid){
            for (int num : row){
                result.push_back(num);
            }
        }
    }
    return result;
}