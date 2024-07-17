#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_idx = 0;
    
    for (int i = 1; i <= v.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; ++j) {
            left_sum += v[j];
        }
        
        for (int j = i; j < v.size(); ++j) {
            right_sum += v[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff <= min_diff) {
            min_diff = diff;
            split_idx = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + split_idx), vector<int>(v.begin() + split_idx, v.end())};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for (auto &x : v) {
        cin >> x;
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "[";
    for (const auto &x : result.first) {
        cout << x << " ";
    }
    cout << "] [" << "[";
    for (const auto &x : result.second) {
        cout << x << " ";
    }
    cout << "] 0" << endl;
    
    return 0;
}