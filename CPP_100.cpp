vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 0; ; i++) {
        if ((n % 2) == 1) {
            pile.push_back(2 * i + 1);
        } else {
            pile.push_back(2 * i + 2);
        }
        if (pile.back() > n) break;
    }
    return pile;
}