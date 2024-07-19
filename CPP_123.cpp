vector<int> get_odd_collatz(int n){
    vector<int> result;
    result.push_back(1);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            result.push_back(n);
            n = 3 * n + 1;
        }
    }
    sort(result.begin(), result.end());
    return result;
}