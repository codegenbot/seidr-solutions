#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; ++i) {
        if (v[i] == 0) {
            res[0].push_back(v[i]);
            res[1].clear();
            break;
        } else {
            res[0].push_back(v[i]);
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        if (v[i] == 0) {
            res[1].push_back(v[i]);
            res[0].clear();
            break;
        } else {
            res[1].push_back(v[i]);
        }
    }
    return res;
}

int main() {
    int n, num;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        v.push_back(num);
    }
    vector<vector<int>> result = cutVector(v);
    cout << "[";
    for (int i = 0; i < result[0].size(); ++i) {
        cout << result[0][i];
        if (i != result[0].size() - 1)
            cout << " ";
    }
    cout << "] [";
    for (int i = 0; i < result[1].size(); ++i) {
        cout << result[1][i];
        if (i != result[1].size() - 1)
            cout << " ";
    }
    cout << "]" << endl;
    return 0;
}