int sum = 0;
    for (int num : q) {
        sum += num;
    }
    if (sum <= w && equal(q.begin(), q.end(), q.rbegin())) {
        return true;
    } else {
        return false;
    }
}