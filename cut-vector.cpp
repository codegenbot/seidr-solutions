#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for(int i = 1; i < v.size(); i++) {
        vector<int> left(v.begin(), v.begin() + i);
        vector<int> right(v.begin() + i, v.end());
        
        if((int)left.size() == (int)right.size()) {
            return {left, right};
        }
        
        int diff = abs((int)accumulate(left.begin(), left.end(), 0) - (int)accumulate(right.begin(), right.end(), 0));
        
        if(diff < min_diff) {
            min_diff = diff;
            result = {left, right};
        }
    }
    
    return result;
}

int main() {
    int n; 
    cin >> n;
    vector<int> v(n);
    for (auto &x: v) cin >> x;
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";
    for(auto x:res.first)cout<<x<<" ";
    cout<<"]"<<"\n"<<"["; 
    for(auto x:res.second)cout<<x<<" "; 
    cout<<"]"<<"\n";
    
    return 0;
}