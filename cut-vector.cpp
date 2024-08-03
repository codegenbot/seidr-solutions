#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> res;
    for (int i = 1; i < v.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j) {
            left_sum += v[j];
        }
        for (int j = i; j < v.size(); ++j) {
            right_sum += v[j];
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            res = {{}, {}};
            for (int j = 0; j < i; ++j) {
                res.first.push_back(v[j]);
            }
            for (int j = i; j < v.size(); ++j) {
                res.second.push_back(v[j]);
            }
        }
    }
    return res;
}