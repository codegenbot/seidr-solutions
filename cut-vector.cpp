#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    long long total = accumulate(v.begin(), v.end(), 0LL);
    int min_diff = INT_MAX, best_i = 0;
    long long cum_sum = 0;
    for (int i = 0; i < v.size(); i++) {
        cum_sum += v[i];
        long long diff = abs(cum_sum - (total - cum_sum));
        if (diff < min_diff) {
            min_diff = diff;
            best_i = i;
        }
    }
    vector<vector<int>> res(2);
    res[0] = vector<int>(v.begin(), v.begin() + best_i);
    res[1] = vector<int>(v.begin() + best_i, v.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    cout << "[";
    for (int i = 0; i < res[0].size(); i++) {
        cout << res[0][i];
        if (i < res[0].size() - 1) {
            cout << " ";
        }
    }
    cout << "] [";
    for (int i = 0; i < res[1].size(); i++) {
        cout << res[1][i];
        if (i < res[1].size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    return 0;
}