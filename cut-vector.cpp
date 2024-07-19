#include <climits>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    long long total_sum = 0;
    for (int i : v) {
        total_sum += i;
    }

    long long left_sum = 0;
    for (int i = 0; i < n; i++) {
        if ((total_sum - left_sum) % (i + 1) == 0 || (total_sum - left_sum) % (i + 1) < LLONG_MAX / 2) {
            res[0].assign(v.begin(), v.begin() + i+1);
            res[1].assign(v.begin() + i, v.end());
            return res;
        }
        left_sum += v[i];
    }
    
    res[0].assign(v.begin(), v.begin() + n-1);
    res[1].assign({v[n-1]});
    
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
    for (auto &v : res) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}