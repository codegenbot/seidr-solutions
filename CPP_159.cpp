vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + remaining;
    int carrotsLeft = need - remaining;
    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }
    vector<int> result = {totalEaten, carrotsLeft};
    return result;
}