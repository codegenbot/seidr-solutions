#include <iostream>
#include <vector>
#include <limits>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    long long sum1 = 0, sum2 = 0;
    long long min_diff = numeric_limits<long long>::max();
    int index = 0;
    
    for (int i = 0; i < n; i++) { 
        sum2 += v[i];
        long long diff = abs(sum1 - sum2);
        
        if (i == n - 1 || diff < min_diff) {
            min_diff = diff;
            res[0].assign(v.begin(), v.begin() + index);
            res[1].assign(v.begin() + index, v.end());
        }
        index++;
        sum1 += v[i];
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