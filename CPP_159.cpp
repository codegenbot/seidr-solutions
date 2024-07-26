vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = totalCarrots > remaining ? remaining : totalCarrots;
    int leftCarrots = remaining - eatenCarrots;
    return {eatenCarrots, leftCarrots};
}