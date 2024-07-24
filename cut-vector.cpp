#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        if (i < v.size()) {
            for (int j = 0; j < i; j++) {
                leftSum += v[j];
            }
            for (int j = i; j < v.size(); j++) {
                rightSum += v[j];
            }
        } else {
            leftSum = 0;
            rightSum = 0;
            for (int j = 0; j < v.size(); j++) {
                leftSum += v[j];
                rightSum += v[j];
            }
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left, right;
    
    for (int i = 0; i < cutIndex; i++) {
        left.push_back(v[i]);
    }
    for (int i = cutIndex; i < v.size(); i++) {
        right.push_back(v[i]);
    }
    
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
    for (auto x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    for (auto x : result.second) {
        cout << x << " ";
    }
    return 0;
}