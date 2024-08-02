#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        if (i == v.size() || v[i] - v[i-1] < minDiff) {
            minDiff = v[i] - v[i-1];
            cutIndex = i;
        }
    }
    
    vector<int> leftVec(v.begin(), v.begin() + cutIndex);
    vector<int> rightVec(v.begin() + cutIndex, v.end());
    
    return make_pair(leftVec, rightVec);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "left: ";
    for (const auto &x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    
    cout << "right: ";
    for (const auto &x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}