vector<int> eat(int number, int need, int remaining){
    int totalEatenCarrots = number + need;
    int carrotsLeft = max(0, remaining - need);
    return {totalEatenCarrots, carrotsLeft};
}