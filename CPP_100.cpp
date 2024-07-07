```cpp
#include <vector>
#include <cassert>
#include <initializer_list>
#include <bits/stdc++.h>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 2; i <= n; i += 2) {
        pile.push_back(i);
    }
    return pile;
}

bool areSame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(areSame(make_a_pile(8), {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22}));
}