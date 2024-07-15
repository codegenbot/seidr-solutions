vector<int> eat(int number, int need, int remaining){
    int totalEatenCarrots = number + min(need, remaining);
    int remainingCarrots = max(0, remaining - need);
    return {totalEatenCarrots, remainingCarrots};
}