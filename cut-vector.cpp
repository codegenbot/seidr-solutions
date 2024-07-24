#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + cut_index), vector<int>(v.begin() + cut_index, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& x : v) cin >> x;
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";
    for (const auto& x : result.first) cout << x << " ";
    cout << "] ["; 
    for (const auto& x : result.second) cout << x << " ";
    cout << "]\n";
    
    return 0;
}