std::vector<int> even_odd_count(int n) {
    return {n % 2 == 0 ? 1 : 0, n % 2 == 0 ? 0 : 1};
}