Here is the completed code:

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int i = 1;
    while (i <= n) {
        if (n % 2 == 0) {
            pile.push_back(i + 1);
        } else {
            pile.push_back(i * 2 - 1);
        }
        i += (n % 2 == 0 ? 2 : 1);
    }
    return pile;
}