#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result = {{}, {}};

    for (int i = 1; i < v.size(); i++) {
        int left_sum = accumulate(v.begin(), v.begin() + i, 0);
        int right_sum = accumulate(v.begin() + i, v.end(), 0);

        if (left_sum == right_sum) {
            return {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        }

        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            result = {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        }
    }

    return result;
}