vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n > 1) {
        if (n % 2 != 0) {
            result.push_back(n);
        }
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1); // Include 1 as part of the odd numbers
    sort(result.begin(), result.end());
    return result;
}