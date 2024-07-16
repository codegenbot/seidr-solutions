#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left, right;
    for (int i = 0; i < cutIndex; i++) {
        left.push_back(v[i]);
    }
    for (int i = cutIndex + 1; i < v.size(); i++) {
        right.push_back(v[i]);
    }
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";
    for (const auto &x : result.first) cout << x << " ";
    cout << "]" << endl;
    cout << "[";
    for (const auto &x : result.second) cout << x << " ";
    cout << "]0" << endl;
    
    return 0;
}