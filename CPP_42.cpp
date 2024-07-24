#include <vector>
#include <cassert>

bool issame(const std::vector<int>& l1, const std::vector<int>& l2) {
    return l1 == l2;
}

std::vector<int> incr_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}