vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int leftOver = max(0, remaining - need);
    return {totalEaten, leftOver};
}