#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            result.first = vector<int>(v.begin(), v.begin() + i + 1);
            result.second = vector<int>(v.begin() + i, v.end());
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "{";
    for (const auto &x : res.first) {
        cout << x << " ";
    }
    cout << "}" << endl;
    cout << "{";
    for (const auto &x : res.second) {
        cout << x << " ";
    }
    cout << "0" << endl;
    
    return 0;
}