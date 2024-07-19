```cpp
#include <cassert>
#include <set>

int setSize(std::set<int> s) {
    return s.size();
}

int getSetSize(int i, int j, int k) {
    std::set<int> s = {i, j, k};
    return setSize(s);
}

int testMain() {
    int result = getSetSize(127, 97, 8192);
    assert(setSize({result}) == 1);
    return 0;
}