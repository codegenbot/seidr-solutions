#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int cut_index = 0;

    for (int i = 1; i < n; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; j++)
            sum1 += v[j];
        for (int j = i; j < n; j++)
            sum2 += v[j];

        int diff = abs(sum1 - sum2);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + cut_index);
    vector<int> right(v.begin() + cut_index, v.end());
    return make_pair(left, right);
}