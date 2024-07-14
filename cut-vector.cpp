#include <vector>
#include <iostream>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < n; ++i) {
        int sum1 = accumulate(v.begin(), v.begin() + i, 0);
        int sum2 = accumulate(v.begin() + i, v.end(), 0);

        if (sum1 == sum2 || abs(sum1 - sum2) < min_diff) {
            min_diff = abs(sum1 - sum2);
            cut_index = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + cut_index);
    vector<int> right(v.begin() + cut_index, v.end());

    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(v);

    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "]" << endl;

    cout << "[";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "]" << endl;

    return 0;
}