#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int idx = -1;
    
    for(int i=0; i<n-1; i++){
        int diff = abs(v[i] - v[i+1]);
        if(diff < min_diff){
            min_diff = diff;
            idx = i;
        }
    }
    
    vector<vector<int>> res(2);
    res[0].resize(idx+1);
    for(int i=0; i<=idx; i++){
        res[0].push_back(v[i]);
    }
    res[1].resize(n-idx-1);
    for(int i=idx+1; i<n; i++){
        res[1].push_back(v[i]);
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    vector<vector<int>> result = cutVector(v);
    for(auto &v : result){
        for(int x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}