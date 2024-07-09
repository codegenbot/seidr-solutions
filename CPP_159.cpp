vector<int> eat(int number, int need, int remaining) {
    int totalCarrotsEaten = number + min(need, remaining);
    int carrotsLeft = max(0, remaining - need);
    return {totalCarrotsEaten, carrotsLeft};
}