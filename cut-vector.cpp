#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    if(n == 0)
        return {{}, {}};
    if(n == 1) {
        res.push_back(v);
        res.push_back({});
        return res;
    }
    
    for(int i=0; i<n-1; i++) {
        int diff = abs(v[i] - v[n-i-1]);
        vector<int> left, right;
        left.insert(left.begin(), v.begin(), v.begin() + i+1);
        right.push_back(v[i]);
        right.insert(right.end(), v.begin() + i+1, v.end());
        
        if(i == 0 || diff <= abs(v[0] - v[n-1])) {
            res = {{}, left};
            res.push_back(right);
            return res;
        }
    }
    
    vector<int> left, right;
    left.insert(left.begin(), v.begin(), v.end()-1);
    right.push_back(v.back());
    
    res = {{}, left};
    res.push_back(right);
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) 
        cin >> v[i];
    
    vector<vector<int>> result = cutVector(v);
    for(auto v : result) {
        for(auto x : v)
            cout << x << " ";
        cout << endl;
    }
    
    return 0;
}