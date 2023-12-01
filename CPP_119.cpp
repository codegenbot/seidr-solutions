string match_parens(vector<string> lst){
    int count = 0;
    for (int i = 0; i < lst.size(); i++) {
        string s = lst[i];
        for (char c : s) {
            if (c == '(') {
                count++;
            } else if (c == ')') {
                count--;
            }
        }
    }
    return count == 0 ? "Yes" : "No";
}