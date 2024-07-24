```cpp
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += v[i];
    }
    
    long long leftSum = 0, minDiff = LLONG_MAX, idx = -1;
    
    for (int i = 0; i < n; i++) {
        leftSum += v[i];
        
        long long rightSum = totalSum - leftSum;
        
        if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            idx = i;
        }
    }
    
    res[0] = vector<int>(v.begin(), v.begin() + idx + 1);
    res[1] = vector<int>(v.begin() + idx + 1, v.end());
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    auto result = cutVector(v);
    cout << "First subvector: ";
    for (auto x : result[0]) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Second subvector: ";
    for (auto x : result[1]) {
        cout << x << " ";
    }
    return 0;
}