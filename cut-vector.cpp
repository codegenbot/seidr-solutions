#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < v.size(); ++i) {
        if (abs(v[i] - v[0]) <= minDiff) {
            minDiff = abs(v[i] - v[0]);
            cutIndex = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + cutIndex);
    vector<int> right(v.begin() + cutIndex, v.end());
    
    return {left, right};
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
    cout << "]" << endl;
    
    return 0;
}