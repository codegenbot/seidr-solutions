vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;

    while (stones > 0) {
        if (n % 2 == 1)
            pile.push_back(stones);
        else
            pile.push_back(stones - 1);

        if (n % 2 == 1)
            n++;
        else
            n++;

        stones = n;
    }

    return pile;
}