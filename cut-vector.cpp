#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for(int i = 0; i < n; i++) {
        if(i == 0 || i == n-1)
            res[0].push_back(v[i]);
        else {
            int leftSum = 0, rightSum = 0;
            for(int j = 0; j <= i; j++)
                leftSum += v[j];
            for(int j = i; j < n; j++)
                rightSum += v[j];
            
            if(abs(leftSum - rightSum) <= abs(v[i] - v[0])) {
                res[0].clear();
                for(int j = 0; j <= i; j++)
                    res[0].push_back(v[j]);
                break;
            }
            else {
                res[0].clear();
                for(int j = i; j < n; j++)
                    res[0].push_back(v[j]);
                break;
            }
        }
    }
    
    if(res[0].size() != n) {
        int leftSum = 0, rightSum = 0;
        for(int i = 0; i < n/2; i++) {
            leftSum += v[i];
            rightSum += v[n-i-1];
        }
        
        res[1].clear();
        for(int j = 0; j <= n/2; j++)
            res[1].push_back(v[j]);
    }
    
    return res;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5}; // Your input vector
    auto res = cutVector(v);
    
    for(auto vec : res) {
        for(int i : vec) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}