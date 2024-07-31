Here's the completed code:

bool will_it_fly(vector<int> q, int w) {
    bool is_balanced = true;
    int sum = 0;

    for (int i = 0; i < q.size(); i++) {
        if (q[i] != q[q.size() - i - 1]) {
            is_balanced = false;
            break;
        }
        sum += q[i];
    }

    return is_balanced && sum <= w;
}