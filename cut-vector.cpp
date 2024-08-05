#include <vector>
#include <iostream>
#include <ostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i <= v.size(); ++i) {
        int sumLeft = 0, sumRight = 0;
        
        for (int j = 0; j < i; ++j) {
            sumLeft += v[j];
        }
        
        for (int j = i; j < v.size(); ++j) {
            sumRight += v[j];
        }
        
        int diff = abs(sumLeft - sumRight);
        
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + cutIndex);
    vector<int> right(v.begin() + cutIndex, v.end());
    
    return {left, right};
}

pair<vector<int>, vector<int>> main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "Left: ";
    for (const auto &x : res.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (const auto &x : res.second) {
        cout << x << " ";
    }
    return {0, 0};
}