#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int n = v.size();
    long long total_sum = 0;
    for (int i = 0; i < n; ++i) {
        total_sum += v[i];
    }

    pair<int, int> best_split = {0, n};
    double min_diff = numeric_limits<double>::max();

    for (int left = 1; left < n; ++left) {
        long long left_sum = 0;
        for (int i = 0; i < left; ++i) {
            left_sum += v[i];
        }

        long long right_sum = total_sum - left_sum;
        double diff = labs((long long)right_sum - left_sum) / double(left);
        
        if (diff < min_diff) {
            min_diff = diff;
            best_split = {0, left};
        }
    }

    return {{v.begin(), v.begin() + best_split.second}, {v.begin() + best_split.first, v.end()}};
}