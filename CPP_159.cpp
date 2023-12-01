vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    
    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }
    
    vector<int> result = {totalEaten, carrotsLeft};
    return result;
}