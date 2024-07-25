#include <vector>

std::vector<int> leaders(std::vector<int>& v) {
    int n = v.size();
    std::vector<int> leaders;
    
    if (n == 1) return {v[0]};
    
    for (int i = n - 2; i >= 0; --i) {
        if (v[i] >= v[i + 1]) leaders.push_back(v[i]);
    }
    
    leaders.push_back(v[n - 1]);
    
    return leaders;
}