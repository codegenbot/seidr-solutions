#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    for (int i = 0; i < n - 1; i++) {
        if (abs(v[i] - v[i + 1]) <= abs(v[0] - v[n - 1])) {
            res.push_back({v.begin(), v.begin() + i + 1});
            res.push_back({v.begin() + i + 1, v.end()});
            return res;
        }
    }
    
    res.push_back({v.begin(), v.end()});
    res.push_back({});
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
    for (auto &vec : res) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}