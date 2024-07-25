#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 1; i <= v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        
        for (int j = i; j < v.size(); j++) {
            right_sum += v[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            result = {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    pair<vector<int>, vector<int>> res = cutVector(v);

    cout << "[";
    for (const auto &x : res.first) cout << x << " ";
    cout << "]\n[";
    for (const auto &x : res.second) cout << x << " ";
    cout << "]\n";

    return 0;
}