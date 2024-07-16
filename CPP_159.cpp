vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = totalCarrots;
    if (totalCarrots <= remaining) {
        eatenCarrots = totalCarrots;
    } else {
        eatenCarrots = remaining;
    }
    return {eatenCarrots, max(0, totalCarrots - remaining)};
}