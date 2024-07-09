```cpp
#include <vector>
#include <cassert>
#pragma GCC required -std=c++0x

bool same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = 1;
    while (stones <= n) {
        pile.push_back(stones);
        stones += 2;
    }
    return pile;
}

int main() {
    assert(same(make_a_pile(8), {1,3,5,7,9,11,13,15}));
}