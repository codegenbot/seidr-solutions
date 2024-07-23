#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    long long left_sum = 0;
    long long right_sum = 0;
    
    for (int i = 0; i < n; i++) {
        if (i <= (n - i)) {
            left_sum += v[i];
        } else {
            right_sum += v[i];
        }
    }
    
    vector<int> left;
    int cut_index = 0;
    long long min_diff = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        if (i <= (n - i)) {
            left_sum -= v[i];
            right_sum += v[i];
        } else {
            left_sum += v[i];
            right_sum -= v[i];
        }
        
        long long diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> right(v.begin() + cut_index, v.end());
    vector<int> left_v(v.begin(), v.begin() + cut_index);

    return {{left_v}, {right}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for (auto& vec : res) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}