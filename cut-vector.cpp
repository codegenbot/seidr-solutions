#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; ++i) {
        if ((v[i] == v[0]) || (abs(v[i] - v[0]) <= minDiff)) {
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
    for (auto &x : v) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "0\n";
    for (const auto &x : result.first) {
        cout << x << "\n";
    }
    return 0;
}