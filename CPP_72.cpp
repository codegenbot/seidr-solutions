Here is the completed code:

bool will_it_fly(vector<int> q, int w) {
    string s = "";
    for (int i : q) {
        s += to_string(i);
    }
    bool isBalanced = s == string(rbegin(s), rend(s));
    return isBalanced && accumulate(q.begin(), q.end(), 0) <= w;
}