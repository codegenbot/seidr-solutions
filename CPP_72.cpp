bool will_it_fly(vector<int> q, int w) {
    string s = "";
    for (int i : q) {
        s += to_string(i);
    }
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    if (s != rev_s) return false; // not balanced
    long long sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}