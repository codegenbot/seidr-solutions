int main() {
    std::vector<int> pile = make_a_pile(8);
    assert(same(pile, {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}