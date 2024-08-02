Here is the completed code:

bool will_it_fly(vector<int> q, int w) {
    bool is_balanced = true;
    for (int i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - 1 - i]) {
            is_balanced = false;
            break;
        }
    }

    return is_balanced && accumulate(q.begin(), q.end(), 0) <= w;
}