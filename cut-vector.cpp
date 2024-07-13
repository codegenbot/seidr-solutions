#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<int> left, right;
    long long diff = numeric_limits<long long>::max();

    for (int i = 0; i < n; i++) {
        long long leftSum = 0, rightSum = 0;

        // sum of elements on the left side
        for (int j = 0; j <= i; j++) {
            leftSum += v[j];
        }

        // sum of elements on the right side
        for (int j = i + 1; j < n; j++) {
            rightSum += v[j];
        }

        if (abs(leftSum - rightSum) == diff) {
            left.assign(v.begin(), v.begin() + i + 1);
            right = vector<int>(v.begin() + i + 1, v.end());
        } else if (abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
            left.assign(v.begin(), v.begin() + i + 1);
            right = vector<int>(v.begin() + i + 1, v.end());
        }
    }

    return {left, right};
}