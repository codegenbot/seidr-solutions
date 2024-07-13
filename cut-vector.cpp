#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> result;
    
    for (int i = 0; i < n - 1; i++) {
        if (abs(v[i] - v[i + 1]) <= abs(v[0] - v[n - 1])) {
            result.push_back({v.begin(), v.end()});
            return {{}, {}};
        }
    }
    
    result.push_back({v.begin(), v.end()});
    return {{}, {}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> res = cutVector(v);
    if (!res[1].empty()) {
        cout << res[0][0] << endl;
    } else {
        cout << res[0][0] << endl;
    }
    return 0;
}