#include <vector>
#include <iostream>
#include <limits>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = numeric_limits<int>::max();
    int cut_idx = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + cut_idx);
    vector<int> right(v.begin() + cut_idx, v.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i <= n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "]\n[";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "0]\n";
    
    return 0;
}