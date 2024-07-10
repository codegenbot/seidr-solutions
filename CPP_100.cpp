Here is the completed code:

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            pile.push_back(i + 1 * 2);
        else
            pile.push_back(i + 1 * 1);
    }
    return pile;
}