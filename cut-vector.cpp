#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n-1) continue;
        
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j <= i/2; j++) {
            left_sum += v[j];
        }
        for (int j = i + i/2; j < n; j++) {
            right_sum += v[j];
        }
        
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + cut_index);
    vector<int> right(v.begin() + cut_index, v.end());
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Left: ";
    for (auto x : result.first) cout << x << " ";
    cout << endl;
    cout << "Right: ";
    for (auto x : result.second) cout << x << " ";
    cout << endl;
    
    return 0;
}