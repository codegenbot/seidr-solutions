#include <vector>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    if (n == 1) return {arr[0]};

    for (int i = n - 1; i >= 0; i--) {
        bool is_leader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                is_leader = false;
                break;
            }
        }
        if (is_leader) res.push_back(arr[i]);
    }

    reverse(res.begin(), res.end());
    return res;
}