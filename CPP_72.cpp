int sum = 0;
    for (int num : q) {
        sum += num;
    }
    if (sum > w) {
        return false;
    }
    vector<int> reversed_q(q.rbegin(), q.rend());
    if (q == reversed_q) {
        return true;
    }
    return false;
}