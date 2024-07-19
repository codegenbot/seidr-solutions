#include <cassert>
#include <set>

int setSize(const std::set<int>& s) {
    return s.size();
}

int getSetSize(int a, int b, int c) {
    std::set<int> s = {std::min(a, b), std::min(b, c), std::min(c, a)};
    return setSize(s);
}

int main() {
    assert(getSetSize(127, 97, 8192) == 3); 
    return 0;
}