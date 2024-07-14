#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; i++) {
        if (i == 0 || v[i] != v[0]) {
            int diff = INT_MAX;
            int pos = -1;
            for (int j = i; j >= 0 && j < n; j--) {
                if (v[j] == v[0]) {
                    res[0].clear();
                    res[0].insert(res[0].end(), v.begin(), v.begin() + j);
                    res[1].clear();
                    res[1].insert(res[1].begin(), v.begin() + j, v.end());
                    return res;
                } else if (v[j] - v[i] < diff) {
                    diff = v[j] - v[i];
                    pos = j;
                }
            }
            for (int j = i; j >= 0 && j < n; j--) {
                if (v[j] - v[i] == diff) {
                    res[0].clear();
                    res[0].insert(res[0].end(), v.begin(), v.begin() + j);
                    res[1].clear();
                    res[1].insert(res[1].begin(), v.begin() + j, v.end());
                    return res;
                }
            }
        } else {
            res[0].clear();
            res[0].insert(res[0].end(), v.begin(), v.begin() + i);
            res[1].clear();
            res[1].insert(res[1].begin(), v.begin() + i, v.end());
            return res;
        }
    }
    res[0].clear();
    res[0].insert(res[0].end(), v.begin(), v.end());
    res[1].clear();
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
    for (auto& vec : res) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}