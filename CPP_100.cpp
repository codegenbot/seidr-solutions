```cpp
std::vector<std::pair<int, int>> make_a_pile(int n) {
    std::vector<std::pair<int, int>> pile;
    pile.reserve(n); 
    for (int i = 1; i <= n; i++) {
        pile.push_back({(i * 2) - 1, i * 2});
    }
    return pile;
}