#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_index = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff < min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + split_index), vector<int>(v.begin() + split_index, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    pair<vector<int>, vector<int>> res = cutVector(v);

    cout << "[";
    for (const auto &x : res.first) cout << x << " ";
    cout << "]\n[";
    for (const auto &x : res.second) cout << x << " ";
    cout << "]\n";

    return 0;
}