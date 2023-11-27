string match_parens(vector<string> lst) {
    string concat = lst[0] + lst[1];
    int count = 0;
    for (char c : concat) {
        if (c == '(') {
            count++;
        } else {
            count--;
        }
        if (count < 0) {
            return "No";
        }
    }
    if (count == 0) {
        return "Yes";
    } else {
        return "No";
    }
}