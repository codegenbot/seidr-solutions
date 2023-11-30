vector<int> collatz(int n) {
    vector<int> result;
    if (n <= 0) {
        return result;
    }
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(n);
    return result;
}
vector<int> get_odd_collatz(int n) {
    vector<int> collatz_seq = collatz(n);
    vector<int> odd_collatz_seq;
    for (int num : collatz_seq) {
        if (num % 2 != 0) {
            odd_collatz_seq.push_back(num);
        }
    }
    sort(odd_collatz_seq.begin(), odd_collatz_seq.end());
    return odd_collatz_seq;
}