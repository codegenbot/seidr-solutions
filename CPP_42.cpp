#include <vector>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    return a == b;
}

std::std::vector<int> incr_list(std::std::vector<int> l) {
    for (int& num : l) {
        num++;
    }
    return l;
}