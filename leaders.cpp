Here is the solution:

#include <vector>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> leaders;
    
    if (n == 1) {
        leaders.push_back(arr[0]);
        return leaders;
    }
    
    for (int i = n - 1; i >= 0; --i) {
        bool is_leader = true;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] >= arr[i]) {
                is_leader = false;
                break;
            }
        }
        if (is_leader) leaders.push_back(arr[i]);
    }
    
    return leaders;
}