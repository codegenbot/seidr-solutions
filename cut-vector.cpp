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
    
    res.push_back({v.begin(), v.end()});
    res.push_back({{0}});
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    for (auto &vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}