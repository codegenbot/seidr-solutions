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
    int num = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            piles.push_back({num});
            num += 2;
        } else {
            piles.push_back({num});
            num++;
        }
    }
    return piles;
}