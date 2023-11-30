vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + remaining;
    int left = 0;
    if (totalEaten >= need) {
        left = totalEaten - need;
        totalEaten = need;
    }
    return {totalEaten, left};
}