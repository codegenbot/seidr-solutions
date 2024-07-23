int sum = 0;
    for (int num : q) {
        sum += num;
    }
    return sum <= w && equal(q.begin(), q.end(), q.rbegin());
}