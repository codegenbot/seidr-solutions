#include <vector>

std::vector<int> leaders(std::vector<int>& vec) {
    int n = vec.size();
    std::vector<int> result;
    
    for (int i = n - 1; i >= 0; --i) {
        bool isLeader = true;
        for (int j = i + 1; j < n; ++j) {
            if (vec[j] >= vec[i]) {
                isLeader = false;
                break;
            }
        }
        
        if (isLeader) {
            result.push_back(vec[i]);
        }
    }
    
    return result;
}