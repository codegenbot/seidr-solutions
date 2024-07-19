```cpp
#include <vector>
#include <set>
#include <cassert>

int setSize(std::set<int> s) {
    return s.size();
}

int getSetSize(int i, int j, int k) {
    std::set<int> s = {i, j, k};
    return setSize(s);
}

int main() {
    int len = getSetSize(127, 97, 8192);
    assert(len == 3);
    return 0;
}