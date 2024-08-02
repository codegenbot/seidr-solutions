#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for(int i=0; i<v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j=0; j<i; j++) {
            leftSum += v[j];
        }
        
        for(int j=i; j<v.size(); j++) {
            rightSum += v[j];
        }
        
        if(abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            result = {vector<int>(v.begin(), v.begin()+i), vector<int>(v.begin()+i, v.end())};
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i=0; i<=n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";
    for(auto x : res.first) {
        cout << x << " ";
    }
    cout << "]," << endl;
    cout << "[";
    for(auto x : res.second) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    return 0;
}