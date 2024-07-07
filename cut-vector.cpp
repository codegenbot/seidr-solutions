#include <vector>
#include <cmath>
#include <climits>
#include <iostream>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int idx = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + idx), vector<int>(v.begin() + idx, v.end())};
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
    for (int i = 0; i < result.first.size() - 1; i++) {
        cout << result.first[i] << " ";
    }
    cout << result.first.back() << "]\n";
    cout << "[";
    for (int i = 0; i < result.second.size() - 1; i++) {
        cout << result.second[i] << " ";
    }
    cout << result.second.back() << "]\n";
    
    return 0;
}