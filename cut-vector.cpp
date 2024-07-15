#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    if(n == 1)
        return {{v[0]}};
    
    int minDiff = INT_MAX;
    int idx = -1;
    
    for(int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j = 0; j <= i; j++)
            leftSum += v[j];
        
        for(int j = i + 1; j < n; j++)
            rightSum += v[j];
        
        int diff = abs(leftSum - rightSum);
        
        if(diff < minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    
    res[0] = vector<int>(v.begin(), v.begin() + idx + 1);
    res[1] = vector<int>(v.begin() + idx + 1, v.end());
    
    return res;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<vector<int>> result = cutVector(v);
    // process the result here
    for(int i = 0; i < 2; i++) {
        cout << "Subvector " << i + 1 << ": ";
        for(auto x: result[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}