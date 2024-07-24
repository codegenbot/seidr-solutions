#include <vector>
using namespace std;

vector<int> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for(int i = 1; i <= v.size(); i++) {
        if(i == v.size() || v[i] - v[i-1] < minDiff) {
            minDiff = v[i] - v[i-1];
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
    vector<int> v(n+1);
    for(int i = 0; i <= n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "(";
    for(auto x : result.first) {
        cout << x << " ";
    }
    cout << "),(";
    for(auto x : result.second) {
        cout << x << " ";
    }
    cout << ")" << endl;
    return 0;
}