#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<int> left;
    long long left_sum = 0, right_sum = 0;

    for (int i = 0; i < n; i++) {
        left_sum += v[i];
        if (i >= 1)
            right_sum += v[n - i - 1];

        if (abs(left_sum - right_sum) <= 1) {
            left.push_back(v[i]);
            return {{left}, {v.begin() + i, v.end()}};
        }
    }

    return {{v.begin(), v.end()}, {}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for (auto& vec : res) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}