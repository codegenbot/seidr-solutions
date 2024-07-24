#include <vector>

std::vector<int> leaders(std::vector<int> v) {
    int n = v.size();
    std::vector<int> res;
    
    if(n == 1) return {v[0]};
    
    for(int i = n - 2; i >= 0; --i){
        if(v[i] >= v[n-1])
            res.push_back(v[i]);
    }
    
    res.push_back(v[n-1]);
    
    return res;
}