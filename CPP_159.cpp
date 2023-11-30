vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    int total = number + need;
    if (remaining >= need) {
        result.push_back(total);
        result.push_back(remaining - need);
    } else {
        result.push_back(total + remaining);
        result.push_back(0);
    }
    return result;
}