vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = (remaining >= need) ? total : total - (need - remaining);
    int left = (remaining >= need) ? remaining - need : 0;
    return {eaten, left};
}