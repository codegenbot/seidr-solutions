#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> result;
    for (int i = 0; i < k; ++i){
        result.push_back(grid[i / 2][i % 2]);
    }
    return result;
}

int main() {
    std::vector<int> expectedResult{1, 3, 1, 3, 1, 3, 1, 3, 1, 3};
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), expectedResult));
    
    std::cout << "The result matches the expected result." << std::endl;

    return 0;
}