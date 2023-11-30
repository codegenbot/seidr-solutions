vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + remaining;
    int carrotsLeft = 0;
    if (totalEaten >= need) {
        carrotsLeft = totalEaten - need;
        totalEaten = need;
    }
    return {totalEaten, carrotsLeft};
}