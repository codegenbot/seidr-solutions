vector<string> reverse_delete(string s, string c) {
    for (int i = 0; i < c.length(); i++) {
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    if (s == reversed_s) {
        return {s, "True"};
    } else {
        return {s, "False"};
    }
}