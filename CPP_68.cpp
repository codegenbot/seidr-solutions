#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result;
    
    if (arr.empty()) return result;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            result.push_back({arr[i], i});
        }
    }

    return result;
}