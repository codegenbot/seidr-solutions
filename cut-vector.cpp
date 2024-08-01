```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for(int i=0; i<n-1; i++) {
        if(abs(v[i] - v[i+1]) <= 0 || abs(v[0] - v[i]) <= abs(v[i+1] - v[n-1])) {
            res[0].insert(res[0].end(), v.begin(), v.begin()+i+1);
            res[1].insert(res[1].begin(), v.begin()+i, v.end());
            return res;
        }
    }
    
    res[0].insert(res[0].end(), v.begin(), v.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    
    cout << "[";
    for(int i=0; i<result[0].size(); i++) {
        cout << result[0][i];
        if(i < result[0].size() - 1) cout << " ";
    }
    cout << "]" << endl;
    
    cout << "[";
    for(int i=0; i<result[1].size(); i++) {
        cout << result[1][i];
        if(i < result[1].size() - 1) cout << " ";
    }
    cout << "]" << endl;
    
    return 0;
}