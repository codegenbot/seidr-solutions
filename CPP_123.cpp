vector<int> collatz_sequence(int n) {
    vector<int> sequence;
    sequence.push_back(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (3 * n) + 1;
        }
        sequence.push_back(n);
    }
    return sequence;
}

vector<int> get_odd_collatz(int n) {
    vector<int> odd_collatz;
    vector<int> sequence = collatz_sequence(n);
    for (int num : sequence) {
        if (num % 2 != 0) {
            odd_collatz.push_back(num);
        }
    }
    sort(odd_collatz.begin(), odd_collatz.end());
    return odd_collatz;
}