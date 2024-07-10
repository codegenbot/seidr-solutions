vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    vector<int> result = {total, remaining - min(remaining, need)};
    return result;
}