#include <vector>
#include <cmath>

using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    int cut_idx = -1;

    for (int i = 0; i < n; ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j)
            left_sum += vec[j];
        for (int j = i; j < n; ++j)
            right_sum += vec[j];

        if (left_sum == right_sum) {
            vector<int> left(vec.begin(), vec.begin() + i);
            vector<int> right(vec.begin() + i, vec.end());
            return left, right;
        }

        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }

    vector<int> left(vec.begin(), vec.begin() + cut_idx);
    vector<int> right(vec.begin() + cut_idx, vec.end());
    return left, right;
}