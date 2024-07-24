#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            result.first = vector<int>(v.begin(), v.begin() + i);
            result.second = vector<int>(v.begin() + i, v.end());
        }
    }
    return result;
}