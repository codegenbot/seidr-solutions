#include <vector>
#include <cassert>

namespace my_namespace {
    std::vector<int> incr_list(std::vector<int> l) {
        for (int i = 0; i < l.size(); i++) {
            l[i]++;
        }
        return l;
    }

    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        if (a.size() != b.size()) {
            return false;
        }

        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }

        return true;
    }
}

int main() {
    using namespace my_namespace;
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
}