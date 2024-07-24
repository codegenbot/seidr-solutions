```cpp
#include <initializer_list>
#include <vector>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1)
            stones = i * 2 - 1;
        else
            stones = i * 2;
        pile.push_back(stones);
    }
    return pile;
}