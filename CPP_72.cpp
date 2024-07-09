int sum = 0;
    for (int n : q) {
        sum += n;
    }
    return (q == vector<int>(q.rbegin(), q.rend())) && (sum <= w);
}