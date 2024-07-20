#include <iostream>
using namespace std;
#include <vector>

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int cut_idx = 0;
    
    for (int i = 1; i <= n/2; i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        
        for (int j = i; j < n; j++) {
            right_sum += v[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
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
    cout << "#1: ";
    for (int x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "#2: ";
    for (int x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}