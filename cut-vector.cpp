#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    int min_diff = INT_MAX;
    long long left_sum = 0, right_sum = 0;
    
    for (int i = 1; i < n; i++) {
        left_sum += v[i-1];
        right_sum = accumulate(v.begin() + i, v.end(), 0);
        
        int diff = abs(left_sum - right_sum);
        if (diff <= min_diff) {
            min_diff = diff;
        }
    }
    
    for (int i = 1; i < n; i++) {
        left_sum += v[i-1];
        right_sum = accumulate(v.begin() + i, v.end(), 0);
        
        int diff = abs(left_sum - right_sum);
        if (diff == min_diff) {
            res.push_back({v.begin(), v.begin() + i});
            res.push_back({v.begin() + i, v.end()});
            return res;
        }
    }
    
    vector<int> left = v;
    vector<int> right = v;
    res.push_back(left);
    res.push_back(right); // default case
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    cout << "[";
    for (int i = 0; i < result[1].size(); i++) {
        cout << result[1][i] << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for (int i = 0; i < result[0].size(); i++) {
        cout << result[0][i] << " ";
    }
    cout << "]" << endl;
    
    return 0;
}