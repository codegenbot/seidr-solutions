bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    return isPalindrome(str) && accumulate(q.begin(), q.end(), 0) <= w;
}

bool isPalindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}