vector<int> reverse_q = q;
    reverse(reverse_q.begin(), reverse_q.end());
    return q == reverse_q && accumulate(q.begin(), q.end(), 0) <= w;
}