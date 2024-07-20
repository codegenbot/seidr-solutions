#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int pos = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    vector<int> left, right;
    for (int i = 0; i < pos; i++) {
        left.push_back(v[i]);
    }
    for (int i = pos + 1; i < v.size(); i++) {
        right.push_back(v[i]);
    }
    return {left, right};
}