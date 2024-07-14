#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int index = -1;
    for (int i = 0; i < v.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; ++j)
            leftSum += v[j];
        for (int j = i + 1; j < v.size(); ++j)
            rightSum += v[j];
        if (leftSum == rightSum) {
            return {{v[0], v[0]}, v.substr(1)};
        }
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    vector<int> left(v.begin(), v.begin() + index);
    vector<int> right(v.begin() + index, v.end());
    return {left, right};
}