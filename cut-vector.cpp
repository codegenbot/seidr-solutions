#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<int> left(v.begin(), v.begin() + n/2);
    vector<int> right(v.begin() + n/2, v.end());
    if (n % 2 == 0 && abs(inner_product(left.begin(), left.end(), right.begin(), right.end())) < 1e-6) {
        return {{left}, {right}};
    }
    
    int minDiff = INT_MAX;
    int cutIndex;
    
    for (int i = 1; i <= n - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> l2(v.begin(), v.begin() + cutIndex);
    vector<int> r2(v.begin() + cutIndex, v.end());
    return {{l2}, {r2}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for (auto& vec : res) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}