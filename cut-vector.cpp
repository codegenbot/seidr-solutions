#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    int cut_idx = -1;

    for (int i = 0; i < n; ++i) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j <= i; ++j) {
            sum_left += vec[j];
        }
        for (int j = i + 1; j < n; ++j) {
            sum_right += vec[j];
        }

        int diff = abs(sum_left - sum_right);
        if (diff == 0 || diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }

    vector<int> left_vec(vec.begin(), vec.begin() + cut_idx);
    vector<int> right_vec(vec.begin() + cut_idx, vec.end());

    return {left_vec, right_vec};
}