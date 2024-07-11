bool check(const string& s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            ++count;
        } else if (c == ')') {
            if (count <= 0) {
                return false;
            }
            --count;
        }
    }
    return count == 0;
}

string match_parens(vector<string> lst) {
    vector<char> s1(lst[0].begin(), lst[0].end());
    vector<char> s2(lst[1].begin(), lst[1].end());

    if (check(s1) && check(s2)) {
        return "Yes";
    } else {
        return "No";
    }
}