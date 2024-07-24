Here is the completed code:

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = min(total - 1000, remaining);
    return {total, left};
}