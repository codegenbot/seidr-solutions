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
    long long sum_left = 0, sum_right = 0;

    for (int i = 0; i < n; i++) {
        sum_right += v[i];

        while (sum_left <= sum_right) {
            if (sum_left == sum_right) {
                best_cut = i;
                min_diff = 0;
                break;
            }

            if (abs(sum_left - sum_right) < min_diff) {
                min_diff = abs(sum_left - sum_right);
                best_cut = i;
            }

            sum_left += v[i-1];
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