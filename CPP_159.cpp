vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + remaining;
    int carrotsLeft = totalCarrots - need;

    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }

    vector<int> result = {totalCarrots, carrotsLeft};
    return result;
}