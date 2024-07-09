#include <vector>

using namespace std;

bool compare(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == k) {
                while (k > 1) {
                    result.push_back(i);
                    result.push_back(j);
                    k--;
                }
            }
        }
    }
    return result;
}