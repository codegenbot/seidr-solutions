bool will_it_fly(vector<int> q, int w) {
    string s = "";
    for (int i : q) {
        s += to_string(i);
    }
    if (!ispalindrome(s)) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

bool ispalindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}