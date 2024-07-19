int sum = 0;
    for (int num : q) {
        sum += num;
    }
    return (q == vector<int>(q.rbegin(), q.rend()) && sum <= w);
}