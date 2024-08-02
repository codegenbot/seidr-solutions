#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    vector<vector<int>> res;

    for (int i = 1; i <= v.size() / 2; i++) {
        int diff = abs(v[i] - v[0]);
        if (diff < min_diff) {
            min_diff = diff;
            res = {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        }
    }

    return res;
}