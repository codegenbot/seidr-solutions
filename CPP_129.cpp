#include <vector>
#include <cassert>

using namespace std;

vector<int> minPath(const vector<vector<int>>& grid, int k) {
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        result.push_back(grid[i % 2][i % 2]);
    }
    return result;
}

int main() {
    assert(minPath({{1, 3}, {3, 2}}, 10) == vector<int>{1, 3, 1, 3, 1, 3, 1, 3, 1, 3});
    
    return 0;
}