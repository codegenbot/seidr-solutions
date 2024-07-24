int sum = 0;
    for (int num : q) {
        sum += num;
    }
    return sum <= w && equal(q.begin(), q.begin() + q.size() / 2, q.rbegin());
}