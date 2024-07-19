```cpp
#include <vector>
#include <set>
#include <cassert>

int skjkasdkd(std::set<int> s) {
    return s.size();
}

int main() {
    int len = skjkasdkd({127, 97, 8192});
    assert(len == 3);
    return 0;
}