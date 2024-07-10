#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;

    for (int i = 0; i < v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += v[j];
        }
        for (int j = i + 1; j < v.size(); j++) {
            rightSum += v[j];
        }

        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            result = {{}, {}};
            for (int j = 0; j <= i; j++) {
                result.first.push_back(v[j]);
            }
            for (int j = i + 1; j < v.size(); j++) {
                result.second.push_back(v[j]);
            }
        }
    }

    return result;
}