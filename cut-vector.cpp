#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for(int i=0; i<n-1; i++) {
        if(abs(v[i] - v[i+1]) <= 0 || abs(v[0]-v[i+1]) <= abs(v[0]-v[i])) {
            res.first = vector<int>(v.begin(), v.begin() + i+1);
            res.second = vector<int>(v.begin() + i+1, v.end());
            return res;
        }
    }
    
    res.first = vector<int>(v.begin(), v.end());
    res.second = vector<int>();
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";
    for(auto x : res.first) {
        cout << x << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for(auto x : res.second) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    return 0;
}