vector<int> make_a_pile(int n) {
    vector<int> pile;
    int numStones = n;
    while (numStones > 0) {
        if (n % 2 == 1)
            pile.push_back(numStones);
        else
            pile.push_back(numStones - 1);
        numStones = (numStones + 1) / 2;
        n = numStones;
    }
    return pile;
}