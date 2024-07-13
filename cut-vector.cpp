#include <vector>
#include <iostream>
#include <climits>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += v[i];
    }
    
    long long leftSum = 0;
    long long minDiff = INT_MAX;
    int cutPos = -1;

    for (int i = 0; i < n; i++) {
        leftSum += v[i];
        
        long long rightSum = totalSum - leftSum;
        
        if(abs(leftSum - rightSum) <= minDiff) {
            minDiff = abs(leftSum - rightSum);
            cutPos = i;
        }
    }

    res[0] = vector<int>(v.begin(), v.begin() + cutPos+1);
    res[1] = vector<int>(v.begin() + cutPos, v.end());
    
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
    cout << "[";
    for (int i = 0; i < res[0].size(); i++) {
        cout << res[0][i];
        if (i < res[0].size() - 1) {
            cout << " ";
        }
    }
    cout << "] [";
    for (int i = 0; i < res[1].size(); i++) {
        cout << res[1][i];
        if (i < res[1].size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    return 0;
}