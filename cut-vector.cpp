#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    for (int i = 0; i < n - 1; i++) {
        if (v[i] == v[i + 1]) {
            res.push_back({v[i]});
            return {{}, {v[i], v[i + 1]}};
        }
    }
    
    int min_diff = INT_MAX, mid;
    for (int i = 0; i < n - 1; i++) {
        if (abs(v[i] - v[i + 1]) < min_diff) {
            min_diff = abs(v[i] - v[i + 1]);
            mid = i;
        }
    }
    
    res.push_back({v[0], v[mid]});
    res.push_back({v[mid + 1], v.back()});
    
    return res;
}

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (int &i : v) cin >> i;
    
    vector<vector<int>> result = cutVector(v);
    cout << "Subvector 1: ";
    for (int &i : result[0]) cout << i << ' ';
    cout << endl;
    cout << "Subvector 2: ";
    for (int &i : result[1]) cout << i << ' ';
    cout << endl;
    
    return 0;
}