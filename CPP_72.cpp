bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    for (int num : q) {
        sum += num;
    }
    if (sum > w) {
        return false;
    }
    vector<int> reverse_q = q;
    reverse(reverse_q.begin(), reverse_q.end());
    if (q != reverse_q) {
        return false;
    }
    return true;
}