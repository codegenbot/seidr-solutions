#include <vector>
using namespace std;

vector<int> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int split_idx = 0;

    for (int i = 1; i < n; ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j)
            left_sum += v[j];
        for (int j = i; j < n; ++j)
            right_sum += v[j];

        if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            split_idx = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + split_idx);
    vector<int> right(v.begin() + split_idx, v.end());
    return {left, right};
}