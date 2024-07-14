#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<int, int> split_idx;
    
    for (int i = 1; i < v.size(); ++i) {
        int left_sum = accumulate(v.begin(), v.begin() + i, 0);
        int right_sum = accumulate(v.begin() + i, v.end(), 0);
        
        if (left_sum == right_sum) {
            return {{v[0]}, v.substr(1)};
        }
        
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            split_idx = {i, i};
        }
    }
    
    vector<int> left(v.begin(), v.begin() + split_idx.first);
    vector<int> right(v.begin() + split_idx.second, v.end());
    
    return {{left}, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "[" ;
    for (auto x : result.first) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    cout << "[" ;
    for (auto x : result.second) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    return 0;
}