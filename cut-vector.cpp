#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int pos = 0;
    
    for (int i = 1; i <= v.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        
        if (i < v.size()) {
            for (int j = 0; j < i; ++j) {
                left_sum += v[j];
            }
            for (int j = i; j < v.size(); ++j) {
                right_sum += v[j];
            }
        } else {
            left_sum = 0;
            right_sum = 0;
            for (int j = 0; j < v.size(); ++j) {
                left_sum += v[j];
                right_sum += v[j];
            }
        }
        
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            pos = i;
        }
    }
    
    vector<int> left, right;
    for (int i = 0; i < pos; ++i) {
        left.push_back(v[i]);
    }
    for (int i = pos; i < v.size(); ++i) {
        right.push_back(v[i]);
    }
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "1 ";
    for (auto x : res.second) cout << x << " ";
    cout << endl;
    return 0;
}