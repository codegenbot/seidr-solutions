vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; ++i) {
        if ((stones + 2) % 3 == 0 || (stones + 1) % 4 == 0)
            stones += 2;
        else
            stones += 1;
        pile.push_back(stones);
    }
    return pile;
}