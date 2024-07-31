bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    bool balanced = true;
    if (!is_palindrome(str)) {
        balanced = false;
    }
    return balanced && accumulate(q.begin(), q.end(), 0) <= w;
}

bool is_palindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}