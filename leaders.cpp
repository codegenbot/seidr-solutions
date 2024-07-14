#include <vector>

std::vector<int> leaders(const std::vector<int>& vec) {
    int n = vec.size();
    vector<int> leaders;
    leaders.push_back(vec.back());
    
    for (int i = n - 2; i >= 0; --i) {
        if (vec[i] >= vec.back()) {
            leaders.push_back(vec[i]);
        }
        vec.pop_back();
    }
    
    return leaders;
}