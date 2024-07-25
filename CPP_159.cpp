vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + remaining;
    int eatenCarrots = totalCarrots >= need ? need : totalCarrots;
    int carrotsLeft = totalCarrots >= need ? totalCarrots - need : 0;
    return {eatenCarrots, carrotsLeft};
}