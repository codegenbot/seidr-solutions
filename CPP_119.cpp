string match_parens(vector<string> lst){
    int open = 0;
    for(auto str : lst) {
        for(char c : str) {
            if(c == '(') open++;
            else if(c == ')') open--;
            if(open < 0) return "No";
        }
    }
    return (open == 0) ? "Yes" : "No";
}