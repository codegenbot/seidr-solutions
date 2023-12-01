#include <vector>
#include <cassert>

bool below_threshold(std::vector<int> l, int t) {
    for (int i = 0; i < l.size(); i++) {
        if (l[i] >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    assert (!below_threshold({1, 8, 4, 10}, 10));
    assert (below_threshold({1, 8, 4, 10}, 15));
    return 0;
}