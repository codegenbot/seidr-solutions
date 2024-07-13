#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> res;
    
    for (int i = 1; i < n; i++) {
        if (vec[i] - vec[0] == vec[i-1] - vec[0]) {
            res.push_back({vec.begin(), vec.begin() + i});
            res.push_back({vec.begin() + i, vec.end()});
            return res;
        }
    }
    
    int min_diff = INT_MAX, cut_index = 0;
    for (int i = 1; i < n; i++) {
        if (abs(vec[i] - vec[0]) < min_diff) {
            min_diff = abs(vec[i] - vec[0]);
            cut_index = i;
        }
    }
    
    res.push_back({vec.begin(), vec.begin() + cut_index});
    res.push_back({vec.begin() + cut_index, vec.end()});
    return res;
}

int main() {
    int n; cin >> n;
    vector<int> vec(n);
    for (auto &x : vec) cin >> x;

    vector<vector<int>> res = cutVector(vec);

    cout << "[";
    for (int i = 0; i < res[0].size(); i++) {
        if (i > 0) cout << ", ";
        cout << res[0][i];
    }
    cout << "]\n";

    cout << "[";
    for (int i = 0; i < res[1].size(); i++) {
        if (i > 0) cout << ", ";
        cout << res[1][i];
    }
    cout << "]\n";

    return 0;
}