#include <vector>
#include <cassert>

bool monotonic(const std::vector<int>& l) {
    bool increasing = true;
    bool decreasing = true;
    size_t i;
    for (i = 1; i < l.size(); ++i) {
        if (l[i] > l[i - 1]) {
            decreasing = false;
        } else if (l[i] < l[i - 1]) {
            increasing = false;
        }
    }
    return increasing || decreasing;
}

int main() {
    assert(monotonic({9, 9, 9, 9}) == true);
    assert(monotonic({1, 2, 3, 4}) == true);
    assert(monotonic({4, 3, 2, 1}) == true);
    assert(monotonic({4, 4, 2, 2}) == true);
    assert(monotonic({1, 3, 2, 4}) == false);
    assert(monotonic({5, 5, 5, 2}) == true);
    return 0;
}