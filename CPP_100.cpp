vector<int> make_a_pile(int n) {
    vector<int> stones;
    int numStones = n;
    for (int i = 0; i < n; i++) {
        stones.push_back(numStones);
        if (n % 2 == 0) {
            numStones += 2;
        } else {
            numStones += 1;
        }
    }
    return stones;
}