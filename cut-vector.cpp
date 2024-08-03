```cpp
#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j <= i; j++) {
            sum_left += v[j];
        }
        for (int j = i + 1; j < v.size(); j++) {
            sum_right += v[j];
        }
        int diff = abs(sum_left - sum_right);
        if (diff == 0 || diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    vector<int> left, right;
    for (int i = 0; i <= cut_index; i++) {
        left.push_back(v[i]);
    }
    for (int i = cut_index + 1; i < v.size(); i++) {
        right.push_back(v[i]);
    }
    return {left, right};
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";

    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i];
        if (i < result.first.size() - 1) {
            cout << " ";
        }
    }

    cout << "] [";
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i];
        if (i < result.second.size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    return 0;
}