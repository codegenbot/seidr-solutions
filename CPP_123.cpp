vector<int> odd_collatz;
    while (n != 1) {
        odd_collatz.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    odd_collatz.push_back(1);
    sort(odd_collatz.begin(), odd_collatz.end());
    vector<int> result;
    for (int num : odd_collatz) {
        if (num % 2 != 0) {
            result.push_back(num);
        }
    }
    return result;