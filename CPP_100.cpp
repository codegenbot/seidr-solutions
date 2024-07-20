```cpp
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current = 1;
    for (int i = 0; i < n; ++i) {
        if (n % 2 == 1) { // n is odd
            pile.push_back(current);
            current += 2;
        } else { // n is even
            pile.push_back(current);
            current += 1;
        }
    }
    return pile;
}

int main() {
    assert(std::equal(make_a_pile(8).begin(), make_a_pile(8).end(), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}