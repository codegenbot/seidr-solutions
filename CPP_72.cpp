bool will_it_fly(vector<int> q, int w) {
    vector<string> str_q;
    for (int i : q) {
        string s = to_string(i);
        if (!s.compare(reverse(s))) return false;  // unbalanced
    }
    long sum = 0;
    for (int i : q) sum += i;
    return sum <= w;
}

string reverse(string s) {
    string rev;
    for (int i = s.length() - 1; i >= 0; i--) 
        rev += s[i];
    return rev;
}