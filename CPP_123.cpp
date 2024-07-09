Here is the completed code:

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0 && find(result.begin(), result.end(), n) == result.end()) {
            result.push_back(n);
        }
    }
    sort(result.begin(), result.end());
    return result;
}