#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& vec) {
    int min_diff = INT_MAX;
    int cut_idx = 0;
    for (int i = 1; i <= vec.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j) {
            left_sum += vec[j];
        }
        for (int j = i; j < vec.size(); ++j) {
            right_sum += vec[j];
        }
        int diff = abs(left_sum - right_sum);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    return {{vec.begin(), vec.begin() + cut_idx}, {vec.begin() + cut_idx, vec.end()}};
}