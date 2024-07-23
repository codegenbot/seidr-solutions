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

    for (int i = 0; i < n; i++) {
        int sum_left = 0;
        for (int j = 0; j <= i; j++)
            sum_left += v[j];
        int left_sum = sum_left;
        int right_sum = 0;
        for (int j = i + 1; j < n; j++)
            right_sum += v[j];

        int left_diff = abs(left_sum - right_sum);
        if (left_diff < min_diff) {
            min_diff = left_diff;
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