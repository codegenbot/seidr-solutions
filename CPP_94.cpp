#include <vector>
#include <set>
#include <cassert>

int setSize(std::set<int> s) {
    return s.size();
}

int newMain() {
    int len = setSize({127, 97, 8192});
    assert(len == 3);
    return 0;
}