#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    for (int i = 1; i <= n; i++) {
        if (i == n || abs(v[i-1] - v[i]) > abs(v[0] - v[i])) {
            res.push_back(vector<int>(v.begin(), v.begin() + i));
            v.erase(v.begin());
            break;
        }
    }
    
    res.push_back(v);
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> result = cutVector(v);
    for (auto &vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}