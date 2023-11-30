vector<int> make_a_pile(int n){
    vector<int> stones;

    int stonesInLevel = n;
    for (int i = 0; i < n; i++) {
        stones.push_back(stonesInLevel);
        stonesInLevel += (n % 2 == 0) ? 2 : 1;
    }

    return stones;
}