#include <climits>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    long long sum1 = 0;
    long long prev_sum = 0; 
    long long min_diff = LLONG_MAX;
    int index = 1;
    
    for (int i = 0; i < n; i++) { 
        if(i > 0) {
            long long diff = abs(sum1 - prev_sum);
            
            if (diff == 0 || diff <= min_diff) {
                min_diff = diff;
                res[0].clear();
                res[0].reserve(i+1);
                for(int j=0; j<=i; j++) {
                    res[0].push_back(v[j]);
                }
                res[1].clear();
                res[1].resize(n-i-1);
                for(int j=i+1; j<n; j++) {
                    res[1].push_back(v[j]);
                }
            }
        }
        
        sum1 += v[i];
        prev_sum = sum1; 
        index++;
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