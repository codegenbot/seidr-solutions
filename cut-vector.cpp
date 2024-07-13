#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    for (int i = 1; i <= n - 1; i++) {
        if (v[i] == v[0]) {
            res.push_back({v.begin(), v.begin() + i});
            res.push_back({v.begin() + i, v.end()});
            return res;
        }
    }
    
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i <= n - 1; i++) {
        int diff = abs(v[i] - v[0]);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    res.push_back({v.begin(), v.begin() + cut_index});
    res.push_back({v.begin() + cut_index, v.end()});
    
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