bool will_it_fly(vector<int> q, int w) {
    vector<int> qCopy = q;
    reverse(qCopy.begin(), qCopy.end());
    if (q != qCopy)
        return false;

    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}