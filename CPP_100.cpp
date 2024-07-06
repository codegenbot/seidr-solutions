vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;

    for (int i = 0; i < n; ++i) {
        pile.push_back(stones);
        if ((stones % 2) == 0) {
            stones++;
        } else {
            stones += 2;
        }
    }

    return pile;
}