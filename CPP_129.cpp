#include <vector>

namespace std {

    bool issame(vector<int> a, vector<int> b) {
        return a == b;
    }

    vector<int> minPath(vector<vector<int>> grid, int k) {
        vector<int> path;

        for (int i = 0; i < k; ++i) {
            for (const vector<int>& row : grid) {
                for (int val : row) {
                    path.push_back(val);
                }
            }
        }

        return path;
    }

}