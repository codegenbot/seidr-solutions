vector<int> get_odd_collatz(int n){
    vector<int> result;
    result.push_back(1);
    if (n == 1) {
        return result;
    }

    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }

    vector<int> odd_collatz;
    for (int x : result) {
        if (x % 2 != 0) {
            odd_collatz.push_back(x);
        }
    }

    sort(odd_collatz.begin(), odd_collatz.end());
    return odd_collatz;
}