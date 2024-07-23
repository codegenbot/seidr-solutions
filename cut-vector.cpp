#include <iostream>
#include <vector>
#include <limits>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    
    vector<int> left;
    vector<int> right;
    int min_diff = numeric_limits<int>::max();
    int best_cut = -1;

    for (int i = 0; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j <= i; j++)
            left_sum += v[j];
        
        for (int j = i + 1; j < n; j++)
            right_sum += v[j];
        
        if (left_sum == right_sum)
            best_cut = i;
        else if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            best_cut = i;
        }
    }

    left = vector<int>(v.begin(), v.begin() + best_cut + 1);
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