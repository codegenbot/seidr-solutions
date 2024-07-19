#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    long long sum1 = 0, min_diff = LLONG_MAX;
    int index = 0;
    
    for (int i = 0; i < n; i++) { 
        sum1 += v[i];
        if (abs(sum1 - (sum1 + sum2)) < min_diff) {
            res[0].assign(v.begin(), v.begin() + i);
            res[1].assign(v.begin() + i, v.end());
            min_diff = abs(sum1 - (sum1 + sum2));
        }
    }
    
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