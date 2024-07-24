#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int n = vec.size();
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) continue;
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i / 2; j++)
            leftSum += vec[j];
        for (int j = i + 1; j < n; j++)
            rightSum += vec[j];

        if (leftSum == rightSum) {
            return {vec.begin(), vec.begin() + i} , {vec.begin() + i, vec.end()};
        } else if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }

    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < cutIndex / 2; i++)
        leftSum += vec[i];
    for (int i = cutIndex + 1; i < n; i++)
        rightSum += vec[i];

    return {vec.begin(), vec.begin() + cutIndex} , {vec.begin() + cutIndex, vec.end()};
}