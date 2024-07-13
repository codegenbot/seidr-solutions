#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_index = -1;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j <= i; j++) {
            left_sum += v[j];
        }
        
        for (int j = i + 1; j < v.size(); j++) {
            right_sum += v[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + split_index + 1);
    vector<int> right(v.begin() + split_index + 1, v.end());
    
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";
    for (const auto &x : result.first) cout << x << " ";
    cout << "]\n[";
    for (const auto &x : result.second) cout << x << " ";
    cout << "]\n0\n";
    return 0;
}