#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    if(v[0] == v[1]) {
        return make_pair(vector<int>(v.begin(), v.begin() + 1), vector<int>(v.begin() + 1, v.end()));
    }
    int minDiff = abs(v[0] - v[1]);
    int index = 0;

    for (int i = 1; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    vector<int> left = vector<int>(v.begin(), v.begin() + index + 1);
    vector<int> right = vector<int>(v.begin() + index, v.end());
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
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