#include <vector>

std::vector<int> leaders(std::vector<int>& vec) {
    int n = vec.size();
    std::vector<int> leaders;
    for (int i = n - 1; i >= 0; --i) {
        bool is_leader = true;
        for (int j = i + 1; j < n; ++j) {
            if (vec[i] <= vec[j]) {
                is_leader = false;
                break;
            }
        }
        if (is_leader) {
            leaders.push_back(vec[i]);
        }
    }
    return leaders;
}