#include <cstddef>
#include <vector>

bool monotonic(const std::vector<int>& l) {
    bool increasing = true, decreasing = true;
    size_t i;
    for (i = 1; i < l.size(); ++i) {
        if (l[i] < l[i - 1]) {
            increasing = false;
        }
        if (l[i] > l[i - 1]) {
            decreasing = false;
        }
    }
    return increasing || decreasing;
}

int main() {
    assert(monotonic(std::vector<int>{9, 9, 9, 9}) == true);
    return 0;
}