#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    
    vector<int> left;
    vector<int> right;
    int min_diff = INT_MAX;
    int best_cut = -1;

    int sum_left = 0, sum_right = 0;
    for (int i = 0; i < n; i++) {
        sum_left += v[i];
        sum_right += v[n-i-1];

        if ((sum_left == sum_right) || (abs(sum_left - sum_right) < min_diff)) {
            min_diff = abs(sum_left - sum_right);
            best_cut = i;
        }
    }

    left = vector<int>(v.begin(), v.begin() + best_cut+1);
    right = vector<int>(v.begin() + best_cut, v.end());
    
    return {{left}, {right}};
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