bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (!str.compare(to_string(reverse(str)))) {
        int sum = 0;
        for (int i : q) {
            sum += i;
        }
        return sum <= w;
    } else
        return false;
}

string reverse(string s) {
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--)
        rev += s[i];
    return rev;
}