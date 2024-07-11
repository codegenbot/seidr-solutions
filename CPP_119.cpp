bool check(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

string match_parens(vector<string> lst) {
    string first = lst[0];
    string second = lst[1];
    
    if (check(first + second)) {
        return "Yes";
    } else {
        return "No";
    }
}