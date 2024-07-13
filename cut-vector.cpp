#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    vector<vector<int>> result;
    int min_diff = INT_MAX;
    int split_index = -1;
    
    for (int i = 0; i < v.size(); i++) {
        int sum_left = 0, sum_right = 0;
        
        if (i == 0) {
            sum_left = 0;
            sum_right = accumulate(v.begin(), v.end(), 0);
        } else if (i == v.size() - 1) {
            sum_left = accumulate(v.begin(), v.end(), 0);
            sum_right = 0;
        } else {
            sum_left = accumulate(v.begin(), v.begin() + i, 0);
            sum_right = accumulate(v.begin() + i, v.end(), 0);
        }
        
        int diff = abs(sum_left - sum_right);
        
        if (diff <= min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    
    vector<int> left_vec;
    vector<int> right_vec;
    
    for (int i = 0; i < split_index; i++) {
        left_vec.push_back(v[i]);
    }
    for (int i = split_index; i < v.size(); i++) {
        right_vec.push_back(v[i]);
    }
    
    result.push_back(left_vec);
    result.push_back(right_vec);
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> result = cutVector(v);
    for (vector<int> vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}