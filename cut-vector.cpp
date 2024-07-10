#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> left = {v[0]};
    vector<int> right = v;
    
    for (int i = 1; i <= splitIndex; i++) {
        left.push_back(v[i]);
        right.erase(right.begin());
    }
    
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i=0;i<=n;i++){
        cin>>v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    for(auto x:res.first){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x:res.second){
        cout<<x<<" ";
    }
    return 0;
}