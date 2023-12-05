```
#include <vector>
#include <iostream>
#include <climits>

using namespace std;

vector<int> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<int> result;

    if (n == 0) {
        return result;
    }

    int minDiff = INT_MAX;
    int diff, leftSum, rightSum;
    for (int i = 1; i < n - 1; i++) {
        leftSum = vec[i - 1];
        rightSum = 0;
        for (int j = i + 1; j < n; j++) {
            rightSum += vec[j];
        }
        if (leftSum == rightSum) {
            result.push_back(i);
        } else {
            diff = abs(leftSum - rightSum);
            if (diff <= minDiff) {
                result.push_back(i);
            }
        }
    }

    return result;
}
``` 