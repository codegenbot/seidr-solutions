#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    long long sum1 = 0, sum2 = 0;
    long long min_diff = LLONG_MAX;
    int index = 0;
    
    for (int i = 0; i < n; i++) { 
        sum2 += v[i];
        
        if (sum1 == sum2) {
            res[0].assign(v.begin(), v.begin() + i+1);
            res[1].assign(v.begin() + i+1, v.end());
            return res;
        }
        
        long long diff = abs(sum1 - sum2);
        
        if (diff < min_diff) {
            min_diff = diff;
            index = i;
        }
        
        sum1 += v[i];
    }
    
    res[0].assign(v.begin(), v.begin() + index+1);
    res[1].assign(v.begin() + index+1, v.end());
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