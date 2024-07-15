#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> minPath(std::vector<std::vector<int>> matrix, int n){
    std::vector<int> result;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < matrix.size(); ++j) {
            result.push_back(matrix[j][i % matrix[j].size()]);
        }
    }

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), std::vector<int>{1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));

    return 0;
}