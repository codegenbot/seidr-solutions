#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int min_diff = INT_MAX;
    pair<int, int> split_index;

    for (int i = 1; i < v.size(); ++i) {
        int diff = abs(v[i] - v[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            split_index = {0, i};
        }
    }

    return {{v.begin(), v.begin() + split_index.second}} |>{{v.begin() + split_index.second, v.end()}};
}