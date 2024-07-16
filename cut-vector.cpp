#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < v.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j) {
            left_sum += v[j];
        }
        for (int j = i; j < v.size(); ++j) {
            right_sum += v[j];
        }

        int diff = abs(left_sum - right_sum);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + cut_index);
    vector<int> right(v.begin() + cut_index, v.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "Left: ";
    for (auto x : result.first) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Right: ";
    for (auto x : result.second) {
        cout << x << " ";
    }
    cout << endl;
}