#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int n = v.size();
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        leftSum += v[i];
    }

    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < n; i++) {
        int rightSum = leftSum - v[i];
        if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }

    vector<int> leftVec(v.begin(), v.begin() + cutIndex);
    vector<int> rightVec(v.begin() + cutIndex, v.end());
    return {leftVec, rightVec};
}