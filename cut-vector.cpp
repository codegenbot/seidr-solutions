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
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j <= i; j++)
            sum_left += v[j];
        for (int j = i; j < n; j++)
            sum_right += v[j];

        int left_diff = abs(sum_left - sum_right);
        int right_diff = abs(sum_right - sum_left);

        if ((left_diff == 0 && right_diff > min_diff) || (right_diff == 0 && left_diff > min_diff)) {
            min_diff = max(left_diff, right_diff);
            best_cut = i;
        } else if ((min_diff > 0) && (min_diff > max(left_diff, right_diff))) {
            min_diff = max(left_diff, right_diff);
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