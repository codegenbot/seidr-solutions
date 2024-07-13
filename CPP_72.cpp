Here is the completed code:

bool will_it_fly(vector<int> q, int w) {
    bool balanced = true;
    for (int i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - i - 1]) {
            balanced = false;
            break;
        }
    }
    return balanced &&accumulate(q.begin(), q.end(), 0) <= w;
}