#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for(int i=1; i<n; i++){
        int diff1 = abs(v[0] - v[i]);
        int diff2 = abs(v[i] - v[n-1]);
        
        if(diff1 <= diff2){
            res.first = vector<int>(v.begin(), v.begin() + i);
            res.second = vector<int>(v.begin() + i, v.end());
            return res;
        }
    }
    
    // If no cut is possible then the whole array will be in one group
    res.first = vector<int>(v.begin(), v.end());
    res.second = vector<int>();
    
    return res;
}

int main(){
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "{";
    for(auto x: result.first)cout << x << " ";
    cout << "}";
    
    cout << endl;
    
    cout << "{";
    for(auto x: result.second)cout << x << " ";
    cout << "}";
    
    return 0;
}