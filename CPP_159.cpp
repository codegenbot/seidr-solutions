vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    int totalCarrots = number + need;
    int carrotsLeft = max(0, remaining - need);
    result.push_back(totalCarrots);
    result.push_back(carrotsLeft);
    return result;
}