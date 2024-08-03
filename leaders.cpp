Here is the solution:

#include <vector>

std::vector<int> leaders(const std::vector<int>& v) {
    int n = v.size();
    std::vector<int> result;
    
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (v[j] >= v[i]) {
                isLeader = false;
                break;
            }
        }
        
        if (isLeader) {
            result.push_back(v[i]);
        }
    }
    
    return result;
}