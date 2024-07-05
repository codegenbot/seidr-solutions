#include <vector>
#include <cassert>

bool is_monotonic(const std::vector<int>& l) {
    if (l.empty()) return true;
    bool increasing = true, decreasing = true;
    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] > l[i - 1]) decreasing = false;
        if (l[i] < l[i - 1]) increasing = false;
    }
    return increasing || decreasing;
}

int main() {
    assert(is_monotonic({9, 9, 9, 9}) == true);
    assert(is_monotonic({1, 2, 2, 3}) == true);
    assert(is_monotonic({3, 2, 1}) == true);
    assert(is_monotonic({3, 2, 2, 3}) == false);
    return 0;
}