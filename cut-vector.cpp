#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> result;
    
    for (int i = 1; i < n; i++) {
        if (abs(v[i-1] - v[i]) <= abs(v[0] - v[i])) {
            result.push_back(vector<int>(v.begin(), v.begin() + i));
            result.push_back(vector<int>(v.begin() + i, v.end()));
            return result;
        }
    }
    
    result.push_back(vector<int>(v.begin(), v.end()));
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    
    vector<vector<int>> res = cutVector(v);
    
    for (const auto &r : res) {
        for (int i : r) cout << i << " ";
        cout << endl;
    }
    
    return 0;
}