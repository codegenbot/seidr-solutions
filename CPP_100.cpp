std::pair<int, int> make_a_pile(int n) {
    for (int i = 1; i <= n; i++) {
        return {2*i - 1, 2*i};
    }
}