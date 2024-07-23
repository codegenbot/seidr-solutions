#include <iostream>
#include <vector>
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

        if(sum_left == sum_right) {
            return {{v.begin(), v.end()}};
        }

        int diff1 = abs(sum_left - sum_right);
        int diff2 = abs(sum_right - sum_left);
        if((diff1<min_diff && diff1<diff2) || (diff2<min_diff && diff1==diff2)) {
            min_diff = min(diff1, diff2);
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