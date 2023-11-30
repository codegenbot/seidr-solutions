vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    int total = number + need;
    int left = remaining - need;
    if (left < 0) {
        left = 0;
    }
    result.push_back(total);
    result.push_back(left);
    return result;
}