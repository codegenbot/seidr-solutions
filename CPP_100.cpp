vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current = 1;

    for (int i = 0; i < n; ++i) {
        if ((n & 1) == 1) { // Check if n is odd
            pile.push_back(current);
            current += 2;
        } else {
            pile.push_back(current);
            current += 1;
        }
    }

    return pile;
}