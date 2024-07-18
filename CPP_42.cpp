#include <cassert>
#include <vector>

std::vector<int> incr_list(std::vector<int> l) {
    for (int &num : l) {
        num++;
    }
    return l;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

bool main() {
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}