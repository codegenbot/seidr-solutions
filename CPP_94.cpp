#include <cassert>
#include <set>

int setSize(std::set<int> s) {
    return s.size();
}

int getSetSize(int i, int j, int k) {
    std::set<int> s = {i, j, k};
    return setSize(s);
}

int main() {
    assert(setSize({getSetSize(127, 97, 8192)}) == 1);
    return 0;
}