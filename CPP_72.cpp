int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    bool is_balanced = true;
    for (int i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - i - 1]) {
            is_balanced = false;
            break;
        }
    }
    return is_balanced && sum <= w;
}