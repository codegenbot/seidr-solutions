string match_parens(vector<string> lst) {
    string str = lst[0] + lst[1];
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
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