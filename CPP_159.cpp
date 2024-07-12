vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = min(totalCarrots, remaining);
    int carrotsLeft = max(0, remaining - totalCarrots);
    
    return {eatenCarrots, carrotsLeft};
}