int sum = 0;
    for (int num : q) {
        sum += num;
    }
    return equal(q.begin(), q.end(), q.rbegin()) && sum <= w;
}