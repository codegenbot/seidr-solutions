#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    for (int i = 1; i < n; i++) {
        if (v[i] - v[0] <= v[n-1] - v[i]) {
            res.push_back({v.begin(), v.begin() + i});
            res.push_back({v.begin() + i, v.end()});
            return res;
        }
    }
    
    res.push_back(v);
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i <= n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    for (auto &v : result) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}