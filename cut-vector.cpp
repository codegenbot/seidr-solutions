#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < vec.size(); ++i) {
        int diff = abs(vec[i] - vec[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<int> leftVec = {vec[0]};
    for (int i = 1; i < cutIndex; ++i) {
        leftVec.push_back(vec[i]);
    }

    vector<int> rightVec = {vec[cutIndex]};
    for (int i = cutIndex + 1; i < vec.size(); ++i) {
        rightVec.push_back(vec[i]);
    }

    return make_pair(leftVec, rightVec);
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (auto &x : vec)
        cin >> x;

    pair<vector<int>, vector<int>> result = cutVector(vec);

    cout << "Left: ";
    for (const auto &x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (const auto &x : result.second) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}