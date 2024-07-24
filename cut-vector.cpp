#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int pos = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        if ((i == v.size() || v[i] != v[0]) && abs((v[0] - v[i-1]) - (v[i] - v[0])) < min_diff) {
            min_diff = abs(v[0] - v[i-1]) - (v[i] - v[0]);
            pos = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + pos), vector<int>(v.begin() + pos, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    pair<vector<int>, vector<int>> res = cutVector(v);
    
    cout << "[";
    for (const auto &x : res.first) cout << x << " ";
    cout << "] ["; 
    for (const auto &x : res.second) cout << x << " ";
    cout << "]";

    return 0;
}