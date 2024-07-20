bool check(vector<char>& s) {
    int count = 0;
    for (char c : s) {
        if (c == '(')
            count++;
        else
            count--;
        if (count < 0) return false;
    }
    return true;
}

string match_parens(vector<string> lst) {
    vector<char> left, right;
    for (string str : lst) {
        for (char c : str) {
            if (c == '(')
                left.push_back(c);
            else
                right.push_back(c);
        }
    }
    return check(left) && check(right) ? "Yes" : "No";
}