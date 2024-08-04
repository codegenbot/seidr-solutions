#include <vector>
#include <cassert>
using namespace std;

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
    std::vector<int> result = minPath({{1, 3}, {3, 2}}, 10);

    return 0;
}