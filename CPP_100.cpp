vector<int> make_a_pile(int n) {
    vector<int> pile(1);
    for (int i = 1; i < n; i++) {
        pile.push_back((pile[i-1] % 2 == 0 ? pile[i-1] + 1 : pile[i-1] - 1));
    }
    return pile;
}