vector<int> eat(int number, int need, int remaining) {
    int total = max(min(number + need, 1000), 0);
    return {total, max(0, min(total - 1000, remaining))};
}