vector<int> eat(int number, int need, int remaining) {
    int totalEatenCarrots = number + remaining;
    int carrotsLeft = max(0, remaining - (need - number));
    return {totalEatenCarrots, carrotsLeft};
}