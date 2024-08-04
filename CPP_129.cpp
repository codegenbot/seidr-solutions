
#include <vector>
#include <cassert>
using namespace std;

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> result;
    for (int i = 0; i < k; ++i){
        result.push_back(grid[i / 2][i % 2]);
    }
    return result;
}

int main() {
    minPath({{1, 3}, {3, 2}}, 10);
    return 0;
}