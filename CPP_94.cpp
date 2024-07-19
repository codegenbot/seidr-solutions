#include <cassert>
#include <set>

int getSetSize(int a, int b, int c) {
    set<int> s({a, b, c});
    return setSize(s);
}

int setSize(set<int> s) {
    return s.size();
}

int originalMain() {
    assert(getSetSize(127, 97, 8192) == 3); 
    return 0;
}