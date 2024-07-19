#include <cassert>
#include <set>

int setSize(const std::set<int>& s) {
    return s.size();
}

int getSetSize(int a, int b, int c) {
    set<int> s = {a, b, c};
    return setSize(s);
}

int main() {
    assert(getSetSize(127, 97, 8192) == 3); 
    return 0;
}