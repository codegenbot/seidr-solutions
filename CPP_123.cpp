vector<int> get_odd_collatz(int n) {
    vector<int> collatz_sequence = {n};
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        collatz_sequence.push_back(n);
    }
    vector<int> odd_collatz;
    for (int num : collatz_sequence) {
        if (num % 2 != 0) {
            odd_collatz.push_back(num);
        }
    }
    sort(odd_collatz.begin(), odd_collatz.end());
    return odd_collatz;
}