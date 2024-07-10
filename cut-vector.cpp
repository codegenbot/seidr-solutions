#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> res;
    for (int i = 0; i < v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        for (int j = i; j < v.size(); j++) {
            right_sum += v[j];
        }
        if (left_sum == right_sum) {
            return {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        } else if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            res = {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        }
    }
    return res;
}