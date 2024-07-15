```
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    int minDiff = INT_MAX;
    int pos = -1;
    
    for(int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        
        if(i > 0)
            leftSum = accumulate(v.begin(), v.begin() + i, 0);
        else
            leftSum = v[0];
        
        for(int j = i+1; j <= n-1; j++)
            rightSum += v[j];
        
        int diff = abs(leftSum - rightSum);
        
        if(diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    res[0] = vector<int>(v.begin(), v.begin() + pos);
    res[1] = vector<int>(v.begin() + pos, v.end());
    
    return res;
}

int main() { 
    vector<int> v = {5, 8, 9, 10};
    vector<vector<int>> result = cutVector(v);
    for(auto &sub : result) {
        cout << "[";
        for(int i : sub)
            cout << i << " ";
        cout << "] ";
    }
}