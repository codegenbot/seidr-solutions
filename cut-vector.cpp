#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    for (int i = 0; i < n; ++i) {
        if (i == 0 || v[i] != v[0]) {
            res.push_back({v[0]});
        }
        else {
            res.back().push_back(v[i]);
        }
        
        if (i > 0 && v[i] == v[0]) {
            int j = i;
            while (j < n && v[j] == v[0]) ++j;
            res.push_back(vector<int>(v.begin() + i, v.begin() + j));
            i = j - 1;
        }
    }
    
    if (n > 0) {
        res.push_back({v[n-1]});
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    
    vector<vector<int>> res = cutVector(v);
    
    for (const auto &x : res) {
        cout << '[';
        for (int i = 0; i < x.size() - 1; ++i) {
            cout << x[i] << ' ';
        }
        cout << x.back() << "]\n";
    }
    
    return 0;
}