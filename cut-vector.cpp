#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; ++i) {
        if (abs(v[i] - v[i+1]) <= abs(v[0] - v[n-1])) return {{v[0], v[i]}, {v[i+1], v[n-1]}};
    }
    return {{v[0]}, {v}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";
    for (int x : res.first) {
        cout << x << " ";
    }
    cout << "] [" ;
    for (int x : res.second) {
        cout << x << " ";
    }
    cout << "]" << endl;
    return 0;
}