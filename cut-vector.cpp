#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 1; i < n; i++) {
        if (v[i] - v[0] <= v[n-1] - v[i]) {
            res.first = vector<int>(v.begin(), v.begin() + i);
            res.second = vector<int>(v.begin() + i, v.end());
            return res;
        }
    }
    
    res.first = vector<int>(v.begin(), v.end());
    res.second = {};
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "1 ";
    for (const auto &x : res.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "0";
    for (int i = 0; i < res.second.size(); ++i) {
        if(i == res.second.size()-1){
            cout<<res.second[i];
        }else{
            cout<<res.second[i]<<" ";
        }
        
    }
    cout << endl;
    
    return 0;
}