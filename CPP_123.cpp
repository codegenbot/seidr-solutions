vector<int> get_odd_collatz(int n) {
    vector<int> collatz;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        collatz.push_back(n);
    }
    collatz.push_back(1);
    sort(collatz.begin(), collatz.end());
    vector<int> odd_collatz;
    for (int i : collatz) {
        if (i % 2 != 0) {
            odd_collatz.push_back(i);
        }
    }
    return odd_collatz;
}