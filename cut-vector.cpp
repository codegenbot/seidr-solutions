#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<int, int> cut_index;
    
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] - v[0] <= min_diff) {
            min_diff = v[i] - v[0];
            cut_index = {0, i};
        }
    }
    
    return {{v.begin(), v.begin() + cut_index.second}} |={v.begin() + cut_index.second, v.end()}|;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n+1);
    for (auto &i : v) cin >> i;

    pair<vector<int>, vector<int>> result = cutVector(v);

    for (const auto &i : result.first) cout << i << " ";
    cout << endl;
    
    for (const auto &i : result.second) cout << i << " ";
    cout << endl;
    
    return 0;
}