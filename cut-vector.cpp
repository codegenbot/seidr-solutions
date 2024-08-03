#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_index = -1;

    for (int i = 0; i < v.size(); ++i) {
        int sum_left = 0, sum_right = 0;

        for (int j = 0; j < i; ++j)
            sum_left += v[j];
        for (int j = i; j < v.size(); ++j)
            sum_right += v[j];

        if (sum_left == sum_right) {
            return {{}, {v.begin(), v.end()}};
        }

        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + split_index);
    vector<int> right(v.begin() + split_index, v.end());
    return {left, right};
}