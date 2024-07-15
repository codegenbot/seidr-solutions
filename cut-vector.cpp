#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

    if (n == 1) {
        for (int i = 0; i < 2; i++) {
            res[i].push_back(v[0]);
        }
        return res;
    }

    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < n - 1; i++) {
        int diff = abs(v[i] - v[0]) + abs(v[n-1] - v[i]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    for (int i = 0; i <= cutIndex; i++) {
        res[0].push_back(v[i]);
    }
    for (int i = cutIndex + 1; i < n; i++) {
        res[1].push_back(v[i]);
    }

    return res;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5}; // Your input vector
    auto res = cutVector(v);

    for (auto vec : res) {
        for (int i : vec) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}