```cpp
#include <vector>
#include <initializer_list>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            pile.push_back(i * 2 - 1);
        } else {
            pile.push_back(i * 2);
        }
    }
    return pile;
}

#include <cassert>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> p = make_a_pile(n);
    assert(isSame(p, {1,3,5,7,9}));
    // Your additional code here
}