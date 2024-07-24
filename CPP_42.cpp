#include <vector>
#include <cassert>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> incr_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

int main() {
    std::vector<int> v1 = {1, 2, 3, 4};
    std::vector<int> v2 = incr_list({0, 1, 2, 3});
    assert(issame(v1, v2));
    return 0;
}