
#include <vector>
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

vector<int> cutVector(vector<int> v) {
    int n = v.size();
    if (n == 1) return vector<int>{v[0], 0};
    int minDiff = INT_MAX;
    int spot = -1;
    for (int i = 1; i < n; i++) {
        int diff = abs(v[i] - v[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            spot = i;
        }
    }
    return vector<int>{v[spot], v[spot+1]};
}