vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    for (int i = 1; ; i++) {
        if ((i + 1) % 2 == 0) {
            stones++;
        }
        pile.push_back(stones);
        if (stones > n) break;
    }
    return pile;
}