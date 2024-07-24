int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (w >= sum && equal(q.begin(), q.end(), q.rbegin()))
        return true;
    return false;
}