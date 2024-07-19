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
    int result = getSetSize(127, 97, 8192);
    assert(result == 3);
    return 0;
}