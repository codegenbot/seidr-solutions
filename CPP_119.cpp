string match_parens(vector<string> lst) {
    string s1 = lst[0], s2 = lst[1];
    int open1 = 0, close1 = 0, open2 = 0, close2 = 0;

    for (char c : s1) {
        if (c == '(') open1++;
        else close1++;
    }
    
    for (char c : s2) {
        if (c == '(') open2++;
        else close2++;
    }

    if (open1 + open2 == close1 + close2) return "Yes";
    return "No";
}