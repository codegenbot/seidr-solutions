#include <climits>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    long long leftSum = 0, minDiff = INT_MAX, cutIndex = -1;

    for (int i = 0; i < n; i++) {
        long long diff = abs(leftSum - v[i]);
        if (diff <= minDiff) {
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