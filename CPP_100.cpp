Here is the completed code:

vector<int> make_a_pile(int n) {
    vector<int> pile(n);
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            pile[i] = i * 2 + 1;
        } else {
            pile[i] = i * 2;
        }
    }
    return pile;
}