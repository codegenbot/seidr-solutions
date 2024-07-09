bool checkBalance(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') count++;
        else if (c == ')') {
            if (count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

string match_parens(vector<string> lst) {
    string s1 = lst[0], s2 = lst[1];
    int count1 = 0, count2 = 0;
    for (char c : s1) {
        if (c == '(') count1++;
        else if (c == ')') count1--;
    }
    for (char c : s2) {
        if (c == '(') count2++;
        else if (c == ')') count2--;
    }
    if ((count1 >= 0 && count2 >= 0) || (count1 <= 0 && count2 <= 0)) return "Yes";
    return "No";
}