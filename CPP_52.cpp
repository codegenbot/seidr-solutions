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
    std::vector<int> l;
    for(int i = 0; i < 4; ++i) {
        l.push_back(i*2 + 4);
    }
    int t = 10;
    assert(!below_threshold(l, t));
}