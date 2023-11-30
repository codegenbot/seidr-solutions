vector<int> collatz(int n) {
    vector<int> seq;
    seq.push_back(n);

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        seq.push_back(n);
    }

    return seq;
}

vector<int> get_odd_collatz(int n) {
    vector<int> seq = collatz(n);
    vector<int> oddSeq;

    for (int i = 0; i < seq.size(); i++) {
        if (seq[i] % 2 == 1) {
            oddSeq.push_back(seq[i]);
        }
    }

    sort(oddSeq.begin(), oddSeq.end());

    return oddSeq;
}