vector<int> eat(int number, int need, int remaining){
    int totalEaten = number + remaining;
    int carrotsLeft = max(0, remaining - (need - number));
    return {totalEaten, carrotsLeft};
}