```cpp
#include <vector>
#include <set>

int setSize(std::set<int> s) {
    return s.size();
}

int main() {
    int len = setSize({127, 97, 8192});
    assert(len == 3);
    return 0;
}