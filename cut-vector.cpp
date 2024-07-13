#include <climits>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    
    long long leftSum = 0, rightSum = sum;
    int minDiff = 0, cutIndex = -1;

    for (int i = 1; i < n - 1; i++) {
        if (rightSum == leftSum) break;
        rightSum -= v[i];
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff || (diff == minDiff && leftSum >= rightSum)) {
            minDiff = diff;
            cutIndex = i + 1; 
        }
        
        leftSum += v[i];
    }
    
    res.push_back(vector<int>(v.begin(), v.begin() + cutIndex));
    res.push_back(vector<int>(v.begin() + cutIndex, v.end()));
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    cout << "[";
    for (int i = 0; i < result[1].size(); i++) {
        cout << result[1][i] << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for (int i = 0; i < result[0].size(); i++) {
        cout << result[0][i] << " ";
    }
    cout << "]" << endl;
    
    return 0;
}