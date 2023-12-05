
#include <vector>
#include <iostream>
#include <climits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    pair<vector<int>, vector<int>> result;

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
        if (diff <= minDiff) {
            result.first.push_back(i);
            for (int k = i + 1; k < n; k++) {
                result.second.push_back(vec[k]);
            }
        }
    }

    return result;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    pair<vector<int>, vector<int>> result = cutVector(vec);

    cout << "Before cutting: ";
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i] << " ";
    }
    cout << endl;

    cout << "After cutting: ";
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i] << " ";
    }
    cout << endl;

    return 0;
}