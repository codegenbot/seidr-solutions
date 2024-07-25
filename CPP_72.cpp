int sum = 0;
    for (int num : q) {
        sum += num;
    }
    return w >= sum && equal(q.begin(), q.end(), q.rbegin());
}