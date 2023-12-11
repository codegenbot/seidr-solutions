#include <vector>
#include <iostream>

using namespace std;

vector<int> cutVector(vector<int>& v) {
    int n = v.size();
    vector<int> left, right;
    int minDiff = INT_MAX;
    int minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (v[i] - v[i - 1] < minDiff) {
            minDiff = v[i] - v[i - 1];
            minIndex = i;
        }
    }

    left.resize(minIndex);
    right.resize(n - minIndex);

    for (int i = 0; i < minIndex; i++) {
        left[i] = v[i];
    }

    for (int i = minIndex; i < n; i++) {
        right[i - minIndex] = v[i];
    }

    return {left, right};
}