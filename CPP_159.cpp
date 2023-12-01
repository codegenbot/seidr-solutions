vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total;
    if (total > remaining) {
        eaten = remaining;
    }
    int left = remaining - eaten;
    return {eaten, left};
}