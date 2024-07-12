#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || abs(v[i] - v[0]) <= abs(v[i-1] - v[0])) {
            res.first = vector<int>(v.begin(), v.begin() + i);
            res.second = vector<int>(v.begin() + i, v.end());
            return res;
        }
    }
    
    res.first = vector<int>(v.begin(), v.end());
    res.second.clear();
    return res;
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
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i] << " ";
    }
    cout << "] [" << "[";
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i] << " ";
    }
    cout << "]" << endl;
    
    return 0;
}