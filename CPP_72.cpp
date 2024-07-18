int sum = 0;
    for (int elem : q) {
        sum += elem;
    }
    if (sum > w) {
        return false;
    }

    vector<int> q_reverse = q;
    reverse(q_reverse.begin(), q_reverse.end());
    return q == q_reverse;
}