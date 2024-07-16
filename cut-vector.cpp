#include <iostream>
#include <vector>
#include <climits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i <= v.size() / 2; i++) {
        if (v[i] - v[0] < minDiff) {
            minDiff = v[i] - v[0];
            splitIndex = i;
        }
        
        if (v[v.size() - i - 1] - v[0] < minDiff) {
            minDiff = v[v.size() - i - 1] - v[0];
            splitIndex = v.size() - i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + splitIndex);
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