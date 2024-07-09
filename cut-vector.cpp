#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    res[0].resize(0);
    res[1].resize(0);
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += v[i];
    }
    int minDiff = INT_MAX;
    int leftIndex = 0;
    
    long long halfSum = totalSum / 2;
    if (totalSum % 2 != 0) {
        halfSum++;
    }
    
    for (int i = 0; i < n; i++) {
        while (i < n && v[i] <= halfSum) {
            leftIndex = i + 1;
            totalSum -= v[i];
            if (totalSum == 0 || abs(totalSum - halfSum) < minDiff) {
                minDiff = abs(totalSum - halfSum);
                break;
            }
            i++;
        }
    }
    
    res[0].clear();
    for (int j = 0; j <= leftIndex; j++) {
        res[0].push_back(v[j]);
    }
    if (totalSum != 0) {
        res[1].clear();
        for (int j = leftIndex; j < n; j++) {
            res[1].push_back(v[j]); 
        }
    } else {
        res[1] = res[0];
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