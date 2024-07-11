#include <vector>
#include <cassert>

bool monotonic(const std::vector<int> &l) {
    bool increasing = true, decreasing = true;
    for (size_t i = 1; i < l.size(); ++i) {
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
    assert(monotonic({9, 9, 9, 9}) == true);
}