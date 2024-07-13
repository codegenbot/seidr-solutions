```
#include <vector>
using namespace std;

#pragma GCC target "cxx11"

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for(int i=0; i<v.size()-1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j=0; j<i; j++) 
            leftSum += v[j];
        for(int j=i+1; j<v.size(); j++) 
            rightSum += v[j];
        
        if(abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].reserve(cutIndex+1);
    for(int i=0; i<=cutIndex; i++) 
        result[0].push_back(v[i]);
    result[1].reserve(v.size()-cutIndex-1);
    for(int i=cutIndex+1; i<v.size(); i++) 
        result[1].push_back(v[i]);
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) 
        cin >> x;
    vector<vector<int>> res = cutVector(v);
    cout << "[";
    for(int i=0; i<res[0].size(); i++) 
        cout << res[0][i] << " ";
    cout << "]" << endl;
    cout << "[";
    for(int i=0; i<res[1].size(); i++) 
        cout << res[1][i] << " ";
    cout << "]" << endl;
    
    return 0;
}