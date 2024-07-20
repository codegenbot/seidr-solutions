Here is the completed code:

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    for (int i = 0; i < n; ++i) {
        if (n % 2 == 1) {
            pile.push_back(stones);
            stones += 2;
        } else {
            pile.push_back(stones);
            stones += 1;
        }
    }
    return pile;
}