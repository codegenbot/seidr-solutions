vector<int> collatz(int n) {
    vector<int> sequence;
    sequence.push_back(n);

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        sequence.push_back(n);
    }

    return sequence;
}

vector<int> get_odd_collatz(int n) {
    vector<int> collatzSequence = collatz(n);
    vector<int> oddNumbers;

    for (int i = 0; i < collatzSequence.size(); i++) {
        if (collatzSequence[i] % 2 == 1) {
            oddNumbers.push_back(collatzSequence[i]);
        }
    }

    sort(oddNumbers.begin(), oddNumbers.end());

    return oddNumbers;
}