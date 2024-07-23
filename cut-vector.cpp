#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        if (v[i-1] == v[i]) {
            return {{}, {v.begin(), v.end()}};
        }
        
        int diff = abs((accumulate(v.begin(), v.begin() + i, 0) - accumulate(v.begin() + i, v.end(), 0)) / (i ? i : 1));
        
        if (diff < minDiff) {
            minDiff = diff;
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
    for (auto &i : v) cin >> i;

    pair<vector<int>, vector<int>> result = cutVector(v);

    cout << "[";
    for (const auto &i : result.first) cout << i << " ";
    cout << "]" << endl;
    cout << "[";
    for (const auto &i : result.second) cout << i << " ";
    cout << "]" << endl;

    return 0;
}