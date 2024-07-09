```cpp
#include <vector>
#include <assert.h>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> l = {1, 8, 4, 10};
    int t = 10;
    assert(!below_threshold(l, t));
}