#include <vector>
#include <climits>

using namespace std;

vector<int> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    for (int i = 1; i <= v.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; ++j) {
            leftSum += v[j];
        }
        for (int j = i; j < v.size(); ++j) {
            rightSum += v[j];
        }
        int diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    return {vector<int>(v.begin(), v.begin() + splitIndex), vector<int>(v.begin() + splitIndex, v.end())};
}