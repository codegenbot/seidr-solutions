#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::vector<int>> make_a_pile(int n) {
    std::vector<std::vector<int>> piles;
    for (int i = 0; i < n; i++) {
        int num = 1;
        if (i % 2 == 0)
            piles.push_back({num, num + 1});
        else
            piles.push_back({num, num + 1});
    }
    return piles;
}

int main() {
    assert(issame(make_a_pile(8), {{1, 2}, {3, 4}, {5, 6}, {7, 8}}));
    return 0;
}