#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int pos = 0;
    
    for (int i = 1; i < v.size(); i++) {
        if (abs(v[i] - v[0]) <= min_diff) {
            min_diff = abs(v[i] - v[0]);
            pos = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + pos), vector<int>(v.begin() + pos, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "[";
    for (const auto &x : result.first) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    cout << "[";
    for (const auto &x : result.second) {
        cout << x << " ";
    }
    cout << "] 0" << endl;
    
    return 0;
}