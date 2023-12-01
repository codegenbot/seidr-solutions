vector<int> eat(int number, int need, int remaining) {
    int totalEatenCarrots = number + remaining;
    int carrotsLeft = 0;
    
    if (totalEatenCarrots >= need) {
        carrotsLeft = totalEatenCarrots - need;
        totalEatenCarrots = need;
    }
    
    vector<int> result = {totalEatenCarrots, carrotsLeft};
    return result;
}