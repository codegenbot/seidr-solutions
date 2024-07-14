#include <vector>
#include <iostream>
#include <climits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;

    for (int i = 1; i <= v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        for (int j = i; j < v.size(); j++) {
            rightSum += v[j];
        }

        if (leftSum == rightSum) {
            return {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        } else if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            result = {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    pair<vector<int>, vector<int>> res = cutVector(v);

    cout << "[";
    for (int x : res.first) {
        cout << x << " ";
    }
    cout << "] [";
    for (int x : res.second) {
        cout << x << " ";
    }
    cout << "]" << endl;

    return 0;
}