```cpp
#include <vector>
#include <climits>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int split_index = 0;

    for (int i = 1; i < n; i++) {
        int diff = std::abs(v[i-1] - v[i]);
        if (diff <= min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }

    vector<int> left = {v[0]};
    for (int i = 1; i < split_index; i++) {
        left.push_back(v[i]);
    }

    vector<int> right = {v[split_index], v.back()};
    for (int i = split_index + 1; i < n - 1; i++) {
        right.push_back(v[i]);
    }

    return make_pair(left, right);
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
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i];
        if (i < result.first.size() - 1) {
            cout << " ";
        }
    }
    cout << "]\n[";
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i];
        if (i < result.second.size() - 1) {
            cout << " ";
        }
    }
    cout << "]\n";
    return 0;
}