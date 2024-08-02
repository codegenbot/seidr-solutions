#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& v) {
    int n = v.size();
    vector<int> left(n);
    for (int i = 0; i < n; i++) {
        left[i] = v[i];
    }
    int minDiff = INT_MAX;
    int splitIndex = -1;
    for (int i = 0; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += v[j];
        }
        for (int j = i + 1; j < n; j++) {
            rightSum += v[j];
        }
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    vector<vector<int>> result(2);
    for (int i = 0; i <= splitIndex; i++) {
        result[0].push_back(v[i]);
    }
    for (int i = splitIndex + 1; i < n; i++) {
        result[1].push_back(v[i]);
    }
    return result;
}