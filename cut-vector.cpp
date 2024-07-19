#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int total_sum = 0;
    for (int x : v) {
        total_sum += x;
    }
    
    vector<vector<int>> res(2);
    int left_sum = 0, right_sum = total_sum;
    int min_diff = INT_MAX, split_index = -1;
    
    for (int i = 0; i < v.size(); i++) {
        if (left_sum == right_sum) {
            res[0].insert(res[0].end(), v.begin(), v.end());
            break;
        }
        
        left_sum += v[i];
        right_sum -= v[i];
        
        if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            split_index = i;
        }
    }
    
    res[0].insert(res[0].end(), v.begin(), v.begin() + split_index);
    res[1].insert(res[1].begin(), v.begin() + (split_index + 1), v.end());
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for (auto &v : res) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}