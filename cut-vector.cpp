#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int pos = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        if (i == v.size() || v[i] - v[i-1] < minDiff) {
            minDiff = v[i] - v[i-1];
            pos = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + pos);
    vector<int> right(v.begin() + pos, v.end());
    
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i <= n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "{";
    for (int i = 0; i < res.first.size(); i++) {
        cout << res.first[i];
        if (i < res.first.size() - 1) {
            cout << " ";
        }
    }
    cout << "}, {";
    for (int i = 0; i < res.second.size(); i++) {
        cout << res.second[i];
        if (i < res.second.size() - 1) {
            cout << " ";
        }
    }
    cout << "0}" << endl;
    
    return 0;
}