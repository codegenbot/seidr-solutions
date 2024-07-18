#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b);
std::vector<int> rolling_max(const std::vector<int>& numbers) {
    std::vector<int> result;
    int max_val = INT_MIN;
    
    for (int i = 0; i < numbers.size(); ++i) {
        max_val = std::max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}