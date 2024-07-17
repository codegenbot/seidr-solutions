#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_idx = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        if (i < v.size()) {
            right_sum = accumulate(v.begin() + i, v.end(), 0);
        }
        
        if (i > 0) {
            left_sum = accumulate(v.begin(), v.begin() + i, 0);
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            split_idx = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + split_idx);
    vector<int> right(v.begin() + split_idx, v.end());
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "Left: ";
    for (int x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    
    cout << "Right: ";
    for (int x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}