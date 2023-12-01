string match_parens(vector<string> lst) {
    string result = "";
    for (string str : lst) {
        result += str;
    }
    
    int count = 0;
    for (char c : result) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
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