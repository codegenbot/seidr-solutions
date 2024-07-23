#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> res(2);

    for (int i = 1; i <= n - 1; i++) {
        int leftSum = 0;
        int rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += vec[j];
        }
        for (int j = i; j < n; j++) {
            rightSum += vec[j];
        }

        if (leftSum == rightSum) {
            res[0] = vector<int>(vec.begin(), vec.begin() + i);
            res[1] = vector<int>(vec.begin() + i, vec.end());
            return res;
        }
    }

    int minDiff = INT_MAX;
    for (int i = 1; i <= n - 1; i++) {
        int leftSum = 0;
        int rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += vec[j];
        }
        for (int j = i; j < n; j++) {
            rightSum += vec[j];
        }

        if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            res[0] = vector<int>(vec.begin(), vec.begin() + i);
            res[1] = vector<int>(vec.begin() + i, vec.end());
        }
    }

    return res;
}