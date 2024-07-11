int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    return (q == vector<int>(q.rbegin(), q.rend()) && sum <= w);
}