#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 0; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j) {
            sum1 += v[j];
        }
        for (int j = i; j < n; ++j) {
            sum2 += v[j];
        }
        
        if (sum1 == sum2) {
            res.first = vector<int>(v.begin(), v.begin() + i);
            res.second = vector<int>(v.begin() + i, v.end());
            return res;
        }
    }
    
    int min_diff = INT_MAX, cut_idx = 0;
    for (int i = 1; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j) {
            sum1 += v[j];
        }
        for (int j = i; j < n; ++j) {
            sum2 += v[j];
        }
        
        int diff = abs(sum1 - sum2);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    res.first = vector<int>(v.begin(), v.begin() + cut_idx);
    res.second = vector<int>(v.begin() + cut_idx, v.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
    }
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";
    for (const auto &i : res.first) {
        cout << i << " ";
    }
    cout << "] [";
    for (const auto &i : res.second) {
        cout << i << " ";
    }
    cout << "]" << endl;
    
    return 0;
}