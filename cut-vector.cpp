#include <vector>
#include <climits> 
#include <cmath>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    vector<int> left = {v[0]};
    vector<int> right = v;
    for (int i = 0; i < cutIndex; i++) {
        left.push_back(v[i]);
    }
    for (int i = cutIndex + 1; i < v.size(); i++) {
        right.pop_back();
    }
    return {left, right};
}