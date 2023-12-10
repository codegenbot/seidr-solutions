#include <vector>
#include <iostream>
using namespace std;

vector<int> cutVector(const vector<int>& v) {
    int n = v.size();
    if (n <= 1) return vector<int>();

    int minDiff = INT_MAX, spot = -1;
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            spot = i;
        }
    }

    vector<int> left, right;
    for (int i = 0; i <= spot; i++) {
        left.push_back(v[i]);
    }
    for (int i = spot + 1; i < n; i++) {
        right.push_back(v[i]);
    }

    return {left, right};
}