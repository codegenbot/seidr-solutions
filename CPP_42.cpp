#include <vector>

namespace std {
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