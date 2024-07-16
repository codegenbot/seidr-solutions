vector<int> collatz_seq = {n};
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        collatz_seq.push_back(n);
    }

    vector<int> odds;
    for (int num : collatz_seq) {
        if (num % 2 == 1) {
            odds.push_back(num);
        }
    }

    sort(odds.begin(), odds.end());
    return odds;
}