#include <vector>
#include <cassert>

bool monotonic(std::vector<int> l) {
    bool increasing = true;
    bool decreasing = true;
    for (int i = 1; i < l.size(); ++i) {
        if (l[i] < l[i - 1]) {
            increasing = false;
        }
        if (l[i] > l[i - 1]) {
            decreasing = false;
        }
        if (!increasing && !decreasing) {
            return false;
        }
    }
    return true;
}

int main_problem_CPP_57() {
    assert(monotonic({9, 9, 9, 9}) == true);
    assert(monotonic({1, 2, 3, 4}) == true);
    assert(monotonic({4, 3, 2, 1}) == true);
    assert(monotonic({1, 2, 2, 4}) == true);
    return 0;
}