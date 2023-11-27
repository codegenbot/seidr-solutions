string match_parens(vector<string> lst) {
    string str1 = lst[0];
    string str2 = lst[1];
    int count = 0;
    
    for (char c : str1) {
        if (c == '(') {
            count++;
        } else {
            count--;
        }
    }
    
    for (char c : str2) {
        if (c == '(') {
            count++;
        } else {
            count--;
        }
    }
    
    if (count == 0) {
        return "Yes";
    } else {
        return "No";
    }
}