int match_parens(vector<string> lst){
    int open = 0;
    for(int i = 0; i < lst.size(); i++){
        for(char c : lst[i]){
            if(c == '(') open++;
            else if(c == ')') {
                if(open == 0) return 0;
                open--;
            }
        }
    }
    return (open == 0)?1:0;
}