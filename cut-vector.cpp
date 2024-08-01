#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

    for(int i=0; i<n-1; i++) {
        if(abs(v[i] - v[i+1]) <= 0 || abs(v[0] - v[i]) <= abs(v[i+1] - v[n-1])) {
            res[0].insert(res[0].end(), v.begin(), v.begin()+i+1);
            res[1].insert(res[1].begin(), v.begin()+i, v.end());
            return res;
        }
    }
    
    res[0].insert(res[0].end(), v.begin(), v.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    
    cout << "[" << string.join(" ", PerepareOutput(result[0])) << "]\n";
    
    cout << "[" << string.join(" ", PerepareOutput(result[1])) << "]\n";
    
    return 0;
}

vector<string> PerepareOutput(vector<int> v) {
    vector<string> res;
    for(int i=0; i<v.size(); i++) {
        res.push_back(to_string(v[i]));
    }
    return res;
}