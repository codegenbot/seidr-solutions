bool will_it_fly(vector<int> q, int w) {
    string s = "";
    for (int i : q) {
        s += to_string(i);
    }
    bool balanced = s == reverse(s).str();
    return balanced && accumulate(q.begin(), q.end(), 0) <= w;
}