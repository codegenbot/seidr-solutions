```cpp
#include <vector>

void solve(std::vector<int>& v, std::vector<int>& res) {
    int n = v.size();
    res.clear();
    if(n == 0) return;
    res.push_back(v[n-1]);
    for(int i=n-2; i>=0; --i){
        bool leader=true;
        for(int j=i+1; j<n; ++j){
            if(v[j]>=v[i]){
                leader=false;
                break;
            }
        }
        if(leader) res.push_back(v[i]);
    }
}