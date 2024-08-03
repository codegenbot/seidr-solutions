#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    for (int i = 1; i < n; i++) {
        if ((v[i] - v[0]) <= (n - i) * (v[n-1] - v[0])) {
            res.push_back({v.begin(), v.begin() + i});
            res.push_back({v.begin() + i, v.end()});
            return res;
        }
    }
    vector<int> left(v.begin(), v.begin());
    vector<int> right(v.begin(), v.end());
    res.push_back(left);
    res.push_back(right);
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
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}