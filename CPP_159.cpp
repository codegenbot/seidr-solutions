vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = (remaining >= need) ? totalCarrots : totalCarrots + (remaining - need);
    int carrotsLeft = (remaining >= need) ? remaining - need : 0;
    vector<int> result = {eatenCarrots, carrotsLeft};
    return result;
}