vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = totalCarrots;
    int carrotsLeft = max(0, remaining - need);
    return {eatenCarrots, carrotsLeft};
}