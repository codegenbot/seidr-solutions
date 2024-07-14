#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        
        for (int j = 0; j <= i; ++j) {
            sum1 += vec[j];
        }
        
        for (int j = i + 1; j < n; ++j) {
            sum2 += vec[j];
        }
        
        int diff = abs(sum1 - sum2);
        
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    
    vector<int> left, right;
    
    for (int i = 0; i <= idx; ++i) {
        left.push_back(vec[i]);
    }
    
    for (int i = idx + 1; i < n; ++i) {
        right.push_back(vec[i]);
    }
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> res = cutVector(vec);
    cout << "[";
    for (const auto &x : res.first) {
        cout << x << " ";
    }
    cout << "] [" << "[";
    for (const auto &x : res.second) {
        cout << x << " ";
    }
    cout << "]";
    return 0;
}