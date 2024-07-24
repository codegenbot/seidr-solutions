#include <iostream>
#include <vector>

std::vector<std::pair<int, int>> make_a_pile(int n) {
    std::vector<std::pair<int, int>> pile(std::nullopt);
    for (int i = 1; i <= n; i++) {
        pile.push_back({2*i - 1, 2*i});
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