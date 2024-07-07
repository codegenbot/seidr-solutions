#include <iostream>
#include <vector>
#include <limits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> res;

    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i-1] - v[i]);
        if (diff <= minDiff) {
            minDiff = diff;
            res.first = vector<int>(v.begin(), v.begin() + i);
            res.second = vector<int>(v.begin() + i, v.end());
        }
    }

    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "] [";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "]" << endl;
    return 0;
}