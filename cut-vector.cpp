#include <vector>
#include <iostream>

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int pos = 0;

    for (int i = 1; i <= n / 2; ++i) {
        if (abs(v[i] - v[n-i-1]) < minDiff) {
            minDiff = abs(v[i] - v[n-i-1]);
            pos = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + pos);
    vector<int> right(v.begin() + pos, v.end());

    return {left, right};
}