string match_parens(vector<string> lst) {
    string s = "";
    for (string str : lst) {
        s += str;
    }

    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else {
            count--;
            if (count < 0)
                return "No";
        }
    }

    return (count == 0) ? "Yes" : "No";
}