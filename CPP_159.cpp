Here is the solution:

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = min(total - 1000, remaining);
    if (left < 0) {
        return {total, 0};
    } else {
        return {total, max(remaining - left, 0)};
    }
}