#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    if (n == 1) {
        res.push_back(v);
        return res;
    }
    for (int i = 0; i < n - 1; i++) {
        if ((v[i] - v[0]) <= (v[n-1] - v[i])) {
            res.push_back(vector<int>(v.begin(), v.begin() + i+1));
            res.push_back(vector<int>(v.begin() + i, v.end()));
            return res;
        }
    }
    res.push_back(v);
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
    for (auto &v : result) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}