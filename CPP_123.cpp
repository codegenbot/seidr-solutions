vector<int> get_odd_collatz(int n) {
    vector<int> odd_numbers;
    while (n != 1) {
        if (n % 2 != 0) {
            odd_numbers.push_back(n);
        }
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    odd_numbers.push_back(1); // since the sequence always ends with 1
    sort(odd_numbers.begin(), odd_numbers.end());
    return odd_numbers;
}