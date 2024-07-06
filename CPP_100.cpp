```cpp
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int level = 1;
    for (int i = 1; ; i++) {
        if ((n % 2 == 0 && i % 2 == 0) || (n % 2 != 0 && i % 2 != 0)) {
            pile.push_back(i);
            n--;
            level++;
        }
        if (n == 0) break;
    }
    return pile;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}