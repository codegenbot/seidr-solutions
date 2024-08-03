vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // if i is even
            pile.push_back(i * 2 - 1); // add the next odd number to the pile
        } else { // if i is odd
            pile.push_back(i * 2); // add the next even number to the pile
        }
    }
    return pile;
}