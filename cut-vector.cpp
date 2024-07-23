#include <utility>
using namespace std;
pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for (int i = 1; i <= v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        for (int j = i; j < v.size(); j++) {
            rightSum += v[j];
        }
        if (abs(leftSum - rightSum) <= minDiff) {
            minDiff = abs(leftSum - rightSum);
            cutIndex = i;
        } else if (leftSum == rightSum) {
            return make_pair(vector<int>(v.begin(), v.end()), vector<int>());
        }
    }
    int leftSum = 0, rightSum = 0;
    for (int j = 0; j < cutIndex; j++) {
        leftSum += v[j];
    }
    for (int j = cutIndex; j < v.size(); j++) {
        rightSum += v[j];
    }
    return make_pair(vector<int>(v.begin(), v.begin() + cutIndex),
                     vector<int>(v.begin() + cutIndex, v.end()));
}