#include <vector>

std::vector<int> leaders(const std::vector<int>& vec) {
    int n = vec.size();
    std::vector<int> leaders;
    
    for (int i = 0; i < n; i++) {
        bool leader = true;
        for (int j = i + 1; j < n; j++) {
            if (vec[j] >= vec[i]) {
                leader = false;
                break;
            }
        }
        if (leader) {
            leaders.push_back(vec[i]);
        }
    }
    
    return leaders;
}