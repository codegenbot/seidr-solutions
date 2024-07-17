#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> &v) {
    int n = v.size();
    vector<vector<int>> res;
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || v[i] == v[i - 1]) {
            res.push_back({v[i]});
        } else if (abs(v[i] - v[0]) <= abs(v[i] - v.back())) {
            res.push_back({v[0], v[i]});
        } else {
            res.push_back({v[0], v.back()});
        }
    }
    
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
    
    for (auto &sub : result) {
        for (auto num : sub) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}