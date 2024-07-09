Here is the solution:

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = min(remaining, total - number);
    return {(total), (remaining - left)};
}