```cpp
#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
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