#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> result(2);
    
    for(int i=0; i<n-1; i++) {
        int leftSum = 0, rightSum = 0;
        for(int j=0; j<i; j++) leftSum += v[j];
        for(int j=i+1; j<n; j++) rightSum += v[j];
        
        if(abs(leftSum - rightSum) <= abs((n-2)*v[0] - (n-i-1)*v[i])) {
            result[0].insert(result[0].end(), v.begin(), v.begin()+i);
            result[1].insert(result[1].begin(), v.begin()+i, v.end());
            return result;
        }
    }
    
    result[0].insert(result[0].end(), v.begin(), v.end());
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> res = cutVector(v);
    for(auto& vec : res) {
        for(auto x : vec) cout << x << " ";
        cout << endl;
    }
    
    return 0;
}