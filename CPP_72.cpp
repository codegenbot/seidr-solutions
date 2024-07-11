bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    bool balanced = true;

    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
        if (q[i] != q[q.size() - i - 1])
            balanced = false;
    }

    return balanced && sum <= w;
}