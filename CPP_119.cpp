string match_parens(vector<string> lst){
    int count = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') {
                count++;
            } else {
                if (count > 0) {
                    count--;
                } else {
                    return "No";
                }
            }
        }
    }
    return count == 0 ? "Yes" : "No";
}