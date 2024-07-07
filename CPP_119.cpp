string match_parens(vector<string> lst){
    string s1 = lst[0], s2 = lst[1];
    int open = 0, close = 0;
    for(char c : s1) {
        if(c == '(') open++;
        else close++;
    }
    for(int i = 0; i < (int)s2.size(); ++i) {
        char c = s2[i];
        if(c == '(') open--;
        else close--;
        if(open < 0 || close < 0) return "No";
    }
    if(open + close == 0) return "Yes";
    return "No";
}