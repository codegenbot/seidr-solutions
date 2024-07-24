#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    if(n == 1) {
        res.push_back(v);
        return res;
    }
    
    for(int i = 0; i < n-1; i++) {
        int diff = abs(v[i] - v[n-i-1]);
        bool equal = (v[i] == v[n-i-1]);
        
        if(equal || i == 0) {
            res.push_back(vector<int>(v.begin(), v.begin() + i+1));
            res.push_back(vector<int>());
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
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    
    for(auto &vec : result) {
        for(int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}