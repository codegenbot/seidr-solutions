vector<int> eat(int number, int need, int remaining){
    int totalEaten = number + min(remaining, need);
    int carrotsLeft = max(0, remaining - need);
    return {totalEaten, carrotsLeft};
}