#include <iostream>
#include <vector>

std::vector<std::pair<int, int>> make_a_pile(int n) {
    std::vector<std::pair<int, int>> pile;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            pile.push_back({(i - 1) * 2, (i - 1) * 2 + 1});
        } else {
            pile.push_back({i * 2 - 1, i * 2});
        }
    }
    return pile;
}

bool isSame(std::vector<std::pair<int, int>> p1, std::vector<std::pair<int, int>> p2) {
    if (p1.size() != p2.size()) {
        return false;
    }
    for (int i = 0; i < p1.size(); i++) {
        if (p1[i] != p2[i]) {
            return false;
        }
    }
    return true;
}

bool checkPiles(std::vector<std::pair<int, int>> p1, std::vector<std::pair<int, int>> p2) {
    if (p1.size() != p2.size()) {
        return false;
    }
    for (int i = 0; i < p1.size(); i++) {
        if (p1[i] != p2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 8;
    std::vector<std::pair<int, int>> pile = make_a_pile(n);
    assert(checkPiles(pile, {{1,2},{4,5},{8,10},{12,14},{16,18},{20,22}}));
    return 0;