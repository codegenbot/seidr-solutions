#include <vector>

std::vector<int> leaders(const std::vector<int>& v) {
    int n = v.size();
    vector<int> leaders;
    for (int i = 0; i < n; i++) {
        bool leader = true;
        for (int j = i + 1; j < n; j++) {
            if (v[j] >= v[i]) {
                leader = false;
                break;
            }
        }
        if (leader) {
            leaders.push_back(v[i]);
        }
    }
    return leaders;
}