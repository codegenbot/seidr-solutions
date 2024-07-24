#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; ++i) {
        if (i == 0 || i == n - 1) {
            res[0].push_back(vec[i]);
            res[1].push_back(vec[i]);
        } else {
            int diff = vec[i] - vec[0];
            for (int j = 1; j < i; ++j) {
                if (abs(vec[j] - vec[0]) <= abs(diff)) {
                    diff = vec[j] - vec[0];
                    res[0].push_back(vec[0]);
                    res[1].clear();
                    res[1].push_back(vec[i]);
                    break;
                }
            }
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    vector<vector<int>> res = cutVector(vec);
    for (const auto& v : res) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}