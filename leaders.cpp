#include <vector>

std::vector<int> leaders(const std::vector<int>& vec) {
    int n = vec.size();
    vector<int> leaders;
    
    if (n == 1) {
        return vec;
    }
    
    for (int i = n - 1; i >= 0; --i) {
        if (vec[i] >= vec.back()) {
            leaders.push_back(vec[i]);
        }
    }
    
    return leaders;
}