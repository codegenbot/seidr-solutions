#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int splitIndex = 0;

    for (int i = 1; i <= vec.size(); ++i) {
        long sumLeft = 0, sumRight = 0;
        for (int j = 0; j < i; ++j) {
            sumLeft += vec[j];
        }
        for (int j = i; j < vec.size(); ++j) {
            sumRight += vec[j];
        }

        int diff = abs(sumLeft - sumRight);
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    vector<int> leftVec(vec.begin(), vec.begin() + splitIndex);
    vector<int> rightVec(vec.begin() + splitIndex, vec.end());
    return {leftVec, rightVec};
}