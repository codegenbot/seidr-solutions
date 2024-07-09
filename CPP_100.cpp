Here is the completed code:

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;

    while (stones > 0) {
        if (n % 2 == 1) { // if n is odd
            pile.push_back(stones);
            stones = stones + 1; // next level will have one more stone
        } else { // if n is even
            pile.push_back(stones);
            stones = stones + 2; // next level will have two more stones
        }
        n--;
    }

    return pile;
}