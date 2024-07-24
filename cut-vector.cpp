#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int pos = -1;
    
    for (int i = 0; i < n; ++i) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j < i; ++j)
            sum_left += v[j];
        for (int j = i; j < n; ++j)
            sum_right += v[j];

        if (sum_left == sum_right) {
            return {{}, {v.begin(), v.end()}};
        }

        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            pos = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + pos);
    vector<int> right(v.begin() + pos, v.end());
    
    return {left, right};
}