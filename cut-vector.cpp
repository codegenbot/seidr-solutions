#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = numeric_limits<int>::max();
    int cut_index = -1;
    for (int i = 0; i < n; i++) {
        int left_sum = accumulate(v.begin(), v.begin() + i, 0);
        int right_sum = accumulate(v.begin() + i, v.end(), 0);
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
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
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";

    for (int i = 0; i < result.first.size(); i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << result.first[i];
    }

    cout << "] [";

    for (int i = 0; i < result.second.size(); i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << result.second[i];
    }

    cout << "]" << endl;
    return 0;
}