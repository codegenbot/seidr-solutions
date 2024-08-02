vector<int> make_a_pile(int n) {
    vector<int> result;
    int stones = n;

    while (stones > 0) {
        if (n % 2 == 1) {
            result.push_back(stones);
        } else {
            result.push_back(stones + 1);
        }
        stones = (stones + 1) / 2;
        n--;
    }

    return result;
}