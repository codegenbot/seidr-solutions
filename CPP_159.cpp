vector<int> eat(int number, int need, int remaining){
    int total = number + need;
    int eatenCarrots = total > remaining ? remaining : total;
    int carrotsLeft = remaining - eatenCarrots;
    return {eatenCarrots, carrotsLeft};
}