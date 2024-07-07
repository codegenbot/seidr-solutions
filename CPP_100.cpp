int main() {
    std::vector<int> pile = make_a_pile(8);
    std::sort(pile.begin(), pile.end());
    for (auto it = pile.begin(); it != pile.end(); ++it) {
        *it -= 1;
    }
    assert(sameCheck(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
}