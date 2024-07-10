vector<int> make_a_pile(int n) {
    vector<int> result;
    int stones = 1;
    for (int i = 0; i < n; ++i) {
        if (n % 2 == 0) { // n is even
            result.push_back(stones * 2);
        } else { // n is odd
            result.push_back(stones * 2 - 1);
        }
        stones += 1;
    }
    return result;
}