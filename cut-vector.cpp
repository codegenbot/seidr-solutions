#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 1; i <= v.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j)
            left_sum += v[j];
        for (int j = i; j < v.size(); ++j)
            right_sum += v[j];
        
        if (left_sum == right_sum) {
            result.first = vector<int>(v.begin(), v.begin() + i);
            result.second = vector<int>(v.begin() + i, v.end());
            return result;
        } else if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            result.first = vector<int>(v.begin(), v.begin() + i);
            result.second = vector<int>(v.begin() + i, v.end());
        }
    }
    
    return result;
}

pair<vector<int>, vector<int>> main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "First half: ";
    for (const auto &x : res.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Second half: ";
    for (const auto &x : res.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return res;
}