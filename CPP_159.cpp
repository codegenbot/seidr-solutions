vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int carrotsLeft = remaining - need;
    
    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }
    
    return {totalCarrots, carrotsLeft};
}