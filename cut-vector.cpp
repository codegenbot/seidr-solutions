#include <vector>
#include <iostream>

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
        diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            result.clear();
            result.push_back(i);
        } else if (diff == minDiff) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    vector<int> result = cutVector(vec);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}