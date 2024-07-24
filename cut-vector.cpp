#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    for (int i = 0; i < vec.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += vec[j];
        }
        for (int j = i + 1; j < vec.size(); j++) {
            rightSum += vec[j];
        }
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            result = {{}, {}};
            for (int j = 0; j <= i; j++) {
                result.first.push_back(vec[j]);
            }
            for (int j = i + 1; j < vec.size(); j++) {
                result.second.push_back(vec[j]);
            }
        }
    }
    return result;
}