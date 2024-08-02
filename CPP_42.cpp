#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l) {
    std::for_each(l.begin(), l.end(), [](int& num) { num++; });
    return l;
}