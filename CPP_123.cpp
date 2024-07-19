vector<int> collatz_seq;
    while (n != 1) {
        collatz_seq.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    collatz_seq.push_back(1);

    vector<int> odd_collatz;
    for (int num : collatz_seq) {
        if (num % 2 == 1) {
            odd_collatz.push_back(num);
        }
    }

    sort(odd_collatz.begin(), odd_collatz.end());

    return odd_collatz;