#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    long long sum1 = 0, sum2 = 0;
    long long diff = *max_element(v.begin(), v.end());
    for (int i = 0; i < n; i++) { 
        if (abs(sum1 - sum2) >= diff) {
            res[0].push_back(v[i]);
            sum1 += v[i];
            sum2 = 0;
        } else {
            sum2 += v[i];
        }
    }
    
    res[1] = vector<int>(v.begin() + res[0].size(), v.end());
    
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