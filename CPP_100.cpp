vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current_stones = n;
    pile.push_back(current_stones);
    for (int i = 1; i < n; ++i) {
        if (n % 2 == 0) {
            current_stones += 2;
        } else {
            current_stones += 2;
        }
        pile.push_back(current_stones);
    }
    return pile;
}