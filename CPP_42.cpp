#include <vector>
#include <cassert>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

int main() {
    std::vector<int> l = {1, 2, 3, 4, 5};
    assert(issame(incr_list(l)[0], 2));
    assert(issame(incr_list(l)[1], 3));
    assert(issame(incr_list(l)[2], 4));
    assert(issame(incr_list(l)[3], 5));
    assert(issame(incr_list(l)[4], 6));

    return 0;
}