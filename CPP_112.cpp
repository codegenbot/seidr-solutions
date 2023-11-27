vector<string> reverse_delete(string s, string c) {
    for (int i = 0; i < c.length(); i++) {
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    bool is_palindrome = (s == rev_s);

    vector<string> result;
    result.push_back(s);
    if (is_palindrome)
        result.push_back("True");
    else
        result.push_back("False");

    return result;
}