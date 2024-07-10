#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    for (int i = 1; i <= n; i++) {
        if (i == n || v[i] - v[0] > v[n-1] - v[i-1]) {
            res.push_back({v[0], v[i-1]});
            break;
        }
    }
    
    res.push_back({v.back()});
    
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