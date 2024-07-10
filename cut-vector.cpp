#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for(int i=1; i<v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j=0; j<i; j++) 
            leftSum += v[j];
        for(int j=i; j<v.size(); j++)
            rightSum += v[j];
        
        if(leftSum == rightSum) 
            return {{}, vector<int>(v.begin(), v.end())};
        
        int diff = abs(leftSum - rightSum);
        if(diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    pair<vector<int>, vector<int>> result;
    result.first = vector<int>(v.begin(), v.begin() + cutIndex);
    result.second = vector<int>(v.begin() + cutIndex, v.end());
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i=0; i<=n; i++) 
        cin >> v[i];
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "{";
    for(auto x : res.first) 
        cout << x << " ";
    cout << "}";
    cout << endl;
    cout << "{";
    for(auto x : res.second) 
        cout << x << " ";
    cout << "}\n";
    
    return 0;
}