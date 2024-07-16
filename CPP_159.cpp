vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need; 
    int eatenCarrots = totalCarrots + min(remaining, 0);
    int leftCarrots = max(remaining - need, 0);
    return {eatenCarrots, leftCarrots};
}