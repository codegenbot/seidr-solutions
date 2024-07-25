#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k);

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        for (const auto& row : grid) {
            for (int val : row) {
                result.push_back(val);
            }
        }
    }
    return result;
}