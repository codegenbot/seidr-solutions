string match_parens(vector<string> lst){
    int open = 0, close = 0;

    for(string s : lst){
        if(s[0] == '(') open++;
        else if(s[0] == ')') close++;

        if(close > open) return "No";
    }

    return (open == close) ? "Yes" : "No";
}