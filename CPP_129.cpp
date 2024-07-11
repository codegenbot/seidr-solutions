#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    std::vector<int> result;
    for (int i = 0; i < k / 2; ++i) {
        for (const auto& row : grid) {
            for (const auto& val : row) {
                result.push_back(val);
            }
        }
    }
    return result;
}