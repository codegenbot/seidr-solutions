#include <vector>
#include <numeric>
#include <utility>

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for (int i = 1; i <= v.size(); i++) {
        int leftSum = accumulate(v.begin(), v.begin() + i, 0);
        int rightSum = accumulate(v.begin() + i, v.end(), 0);
        if (leftSum == rightSum) {
            return pair<vector<int>, vector<int>>(vector<int>(v.begin(), v.begin() + i),
                                                    vector<int>(v.begin() + i, v.end()));
        } else if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }
    int leftSum = accumulate(v.begin(), v.begin() + cutIndex, 0);
    int rightSum = accumulate(v.begin() + cutIndex, v.end(), 0);
    return pair<vector<int>, vector<int>>(vector<int>(v.begin(), v.begin() + cutIndex),
                                            vector<int>(v.begin() + cutIndex, v.end()));
}