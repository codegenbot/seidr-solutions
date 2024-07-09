vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        if (n % 2 == 1) { // If n is odd
            pile.push_back(2*stones + 1);
        } else { // If n is even
            pile.push_back(2*stones);
        }
        stones /= 2;
        n = stones;
    }
    return pile;
}