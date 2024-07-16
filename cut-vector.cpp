```c++
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        for(int j=1; j<=i;j++) leftSum +=v[j];
        for(int j=i; j<v.size();j++) rightSum +=v[j];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + splitIndex+1);
    vector<int> right(v.begin() + splitIndex, v.end());
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "] [";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "]" << endl;
    return 0;
}