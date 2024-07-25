#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> increment_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); ++i) {
        l[i]++;
    }
    return l;
}