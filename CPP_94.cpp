#include <cassert>
#include <set>

int setSize(const std::set<int>& s) {
    return s.size();
}

int getSetSize(int a, int b, int c) {
    std::set<int> set = {a, b, c}; 
    return setSize(set);
}

int main() {
    assert(getSetSize(127, 97, 8192) == 3); 
    return 0;
}