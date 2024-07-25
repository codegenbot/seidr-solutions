#include <vector>
#include <algorithm>
#include <cassert>

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        for (const auto& row : grid) {
            for (int num : row) {
                result.push_back(num);
            }
        }
    }
    return result;
}

int main(){
    assert(minPath({{1, 3}, {3, 2}}, 10) == vector<int>{1, 3, 1, 3, 1, 3, 1, 3, 1, 3});
    
    return 0;
}