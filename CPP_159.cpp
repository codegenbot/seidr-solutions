vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = totalCarrots <= remaining ? totalCarrots : remaining;
    int carrotsLeft = remaining - eatenCarrots;
    return {eatenCarrots, carrotsLeft};
}