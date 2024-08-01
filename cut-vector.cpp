```
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> result;
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || v[i] != v[0]) {
            int diff = INT_MAX, j = -1;
            for (int k = 0; k <= i; k++) {
                int sumLeft = 0, sumRight = 0;
                for (int l = 0; l < k; l++) sumLeft += v[l];
                for (int m = k; m < n; m++) sumRight += v[m];
                
                if (abs(sumLeft - sumRight) < diff) {
                    diff = abs(sumLeft - sumRight);
                    j = k;
                }
            }
            
            result.push_back(vector<int>(v.begin(), v.begin() + j));
            v.erase(v.begin() + j, v.end());
            result.push_back(v);
            break;
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    vector<vector<int>> result = cutVector(v);
    
    for (vector<int>& v : result) {
        for (int& x : v) cout << x << " ";
        cout << endl;
    }
    
    return 0;
}