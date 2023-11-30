vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int leftCarrots = remaining - need;
    if (leftCarrots < 0) {
        leftCarrots = 0;
    }
    return {totalCarrots, leftCarrots};
}