vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + remaining;
    int carrotsLeft = need - remaining;
    
    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }
    
    return {totalEaten, carrotsLeft};
}