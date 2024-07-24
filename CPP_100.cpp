std::vector<std::pair<int, int>> make_a_pile(int n) {
    std::vector<std::pair<int, int>> pile;
    pile.reserve(n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            pile.push_back({(i - 1) * 2, (i - 1) * 2 + 1});
        } else {
            pile.push_back({i * 2 - 1, i * 2});
        }
    }
    return pile;
}