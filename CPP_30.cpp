```
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_positive(const std::vector<int>& l) {
    std::vector<int> result;
    for (int num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}