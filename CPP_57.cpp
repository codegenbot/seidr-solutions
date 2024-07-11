#include <vector>
#include <cassert>

bool monotonic(vector<float> l) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < l.size(); i++) {
        if (l[i] > l[i - 1]) {
            decreasing = false;
        } else if (l[i] < l[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}

int main_test() {
    assert(monotonic({9, 9, 9, 9}) == true);
}