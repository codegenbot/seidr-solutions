vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    int total = number + need;
    int eaten = 0;
    if (remaining >= need) {
        eaten = total;
        remaining -= need;
    } else {
        eaten = number + remaining;
        remaining = 0;
    }
    result.push_back(eaten);
    result.push_back(remaining);
    return result;
}