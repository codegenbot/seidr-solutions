int count_open(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count > 0) {
                count--;
            } else {
                return -1; // mismatched parentheses
            }
        }
    }
    return count;
}

string match_parens(vector<string> lst) {
    int open = count_open(lst[0]);
    int close = count_of(lst, ')') - count_of(lst, '(');
    if (open + close == 0) {
        return "Yes";
    } else if (open == 0 && close % 2 == 1) {
        return "No";
    } else {
        return "Yes";
    }
}

int count_of(vector<string> lst, char c) {
    int count = 0;
    for (string s : lst) {
        for (char ch : s) {
            if (ch == c) {
                count++;
            }
        }
    }
    return count;
}