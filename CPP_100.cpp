Here is the solution:

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // even level
            pile.push_back(i * 2);
        } else { // odd level
            pile.push_back(2 * i + 1);
        }
    }
    return pile;
}