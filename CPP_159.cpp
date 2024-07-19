vector<int> eat(int number, int need, int remaining) {
    int totalEatenCarrots = number + min(remaining, need - number);
    int carrotsLeft = max(0, remaining - (need - number));
    return {totalEatenCarrots, carrotsLeft};
}