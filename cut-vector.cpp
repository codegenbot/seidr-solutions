#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].insert(result[0].end(), v.begin(), v.begin() + splitIndex);
    result[1].insert(result[1].begin(), v.begin() + splitIndex, v.end());
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    
    vector<vector<int>> res = cutVector(v);
    cout << res[0].size() << endl;
    for (const auto &x : res[0]) {
        cout << x << " ";
    }
    cout << endl;
    cout << res[1].size() << endl;
    for (const auto &x : res[1]) {
        cout << x << " ";
    }
    return 0;
}