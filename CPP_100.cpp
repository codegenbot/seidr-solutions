Here is the completed code:

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        pile.push_back(i % 2 == 0 ? i + 1 : i);
    }
    return pile;
}