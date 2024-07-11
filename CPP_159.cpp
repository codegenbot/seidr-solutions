vector<int> eat(int number, int need, int remaining){
    int totalCarrots = number + need;
    int eatenCarrots = min(totalCarrots, remaining);
    int leftCarrots = max(0, remaining - eatenCarrots);
    return {eatenCarrots, leftCarrots};
}