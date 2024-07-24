```cpp
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
        std::vector<int> pile;
        if (i % 2 == 0) {
            int num = 1;
            for (int j = 0; j <= i / 2; j++) {
                pile.push_back(num);
                num += 2;
            }
        } else {
            int num = 1;
            for (int j = 0; j < (i + 1) / 2; j++) {
                pile.push_back(num);
                num++;
            }
        }
        piles.push_back(pile);
    }
    return piles;
}

int main() {
    assert(issame(make_a_pile(8)[7], {1, 2, 3, 4, 5, 6, 7, 8}));
    return 0;
}