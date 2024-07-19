vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = totalCarrots;
    int carrotsLeft = max(remaining - need, 0);
    
    return {eatenCarrots, carrotsLeft};
}