Here is the completed code:

bool will_it_fly(vector<int> q, int w) {
    vector<int> revQ = q;
    reverse(revQ.begin(), revQ.end());
    if (q != revQ)
        return false; // unbalanced
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}