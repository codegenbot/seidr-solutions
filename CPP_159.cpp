vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + remaining;
    int eatenCarrots = min(totalCarrots, need);
    int carrotsLeft = max(0, totalCarrots - need);
    return {eatenCarrots, carrotsLeft};
}