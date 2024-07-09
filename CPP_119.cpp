string match_parens(vector<string> lst){
    int left = 0, right = 0;
    for (const string& str : lst) {
        for (char c : str) {
            if (c == '(') left++;
            else if (c == ')') {
                if (left > 0) left--;
                else right++;
            }
        }
    }
    return (left == 0 && right <= 1) ? "Yes" : "No";
}