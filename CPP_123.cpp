vector<int> get_odd_collatz(int n) {
    vector<int> odds;
    while (n != 1) {
        if (n % 2 != 0) {
            odds.push_back(n);
        }
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    odds.push_back(1); // Adding 1 since the sequence always ends with 1
    sort(odds.begin(), odds.end());
    return odds;
}