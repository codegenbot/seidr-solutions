vector<int> make_a_pile(int n) {
    vector<int> pile;
    int numStones = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pile.push_back(numStones);
            numStones += 2;
        } else {
            pile.push_back(numStones);
            numStones += 1;
        }
    }
    return pile;
}