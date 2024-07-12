int match_parens(vector<string> lst){
    int left = 0, right = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') left++;
            else if (c == ')') right++;
        }
    }
    return (left == right ? "Yes" : "No");
}