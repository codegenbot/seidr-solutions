vector<int> eat(int number, int need, int remaining) {
    int totalCarrotsEaten = number + min(remaining, need);
    int carrotsLeft = max(0, remaining - (need - number));
    return {totalCarrotsEaten, carrotsLeft};
}