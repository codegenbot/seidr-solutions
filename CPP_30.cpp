#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(std::vector<float> a, std::vector<float> b) {
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