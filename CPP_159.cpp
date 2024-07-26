vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int carrotsLeft = max(0, (totalCarrots - remaining));
    totalCarrots -= carrotsLeft;
    return {totalCarrots, carrotsLeft};
}