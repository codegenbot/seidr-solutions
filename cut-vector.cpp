#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    int min_diff = INT_MAX;
    int pos = -1;
    
    for(int i = 0; i < n; i++) {
        if(i == n - 1 || vec[i] != vec[i+1]) {
            int diff = abs((i==n-1) ? vec[i] : vec[i]-vec[i+1]);
            if(diff < min_diff) {
                min_diff = diff;
                pos = i;
            }
        }
    }
    
    vector<vector<int>> res;
    res.push_back({&vec[0], 0, pos});
    res.push_back({&vec[pos+(i==n-1)], pos+1, n});
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    vector<vector<int>> res = cutVector(vec);
    for(auto v : res) {
        for(auto x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}