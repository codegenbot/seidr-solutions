#include <vector>
#include <iostream>
#include <utility>
#include <limits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int minDiff = numeric_limits<int>::max();
    int splitIndex = 0;
    
    for (int i = 1; i <= v.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        
        if (i > 0) {
            for (int j = 0; j < i; ++j) {
                leftSum += v[j];
            }
        }
        
        for (int j = i; j < v.size(); ++j) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        } else if (leftSum == rightSum) {
            return {{v}}, {{}}; 
        }
    }
    
    vector<int> left(v.begin(), v.begin() + splitIndex);
    vector<int> right(v.begin() + splitIndex, v.end());
    
    return {left, right};
}

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto& x : v) cin >> x;
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "1 ";
    for (auto x : result.first) cout << x << " ";
    cout << "\n0\n";
    cout << "1 ";
    for (auto x : result.second) cout << x << " ";
    cout << "\n0\n";
    
    return 0;
}