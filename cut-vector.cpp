#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int idx = -1;
    for (int i = 0; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++)
            left_sum += v[j];
        for (int j = i; j < n; j++)
            right_sum += v[j];
        if (left_sum == right_sum) {
            return {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    return {{v.begin(), v.begin() + idx}, {v.begin() + idx, v.end()}};
}