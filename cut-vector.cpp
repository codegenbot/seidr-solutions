#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + splitIndex), vector<int>(v.begin() + splitIndex, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";
    for (const auto &x : result.first) cout << x << " ";
    cout << "]\n[";
    for (const auto &x : result.second) cout << x << " ";
    cout << "]\n0\n";
    
    return 0;
}