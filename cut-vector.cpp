#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    for (int i = 1; i <= n; i++) {
        if (i == n || abs(v[i] - v[0]) > abs(v[i-1] - v[0])) {
            res.push_back({v.begin(), v.begin() + i});
            v.erase(v.begin());
            break;
        }
    }
    res.push_back({v.begin(), v.end()});
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
        for (int num : sub) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}