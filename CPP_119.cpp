string match_parens(vector<string> lst){
    int open = 0, close = 0;
    for(int i=0; i<lst.size(); i++){
        for(char c: lst[i]){
            if(c == '(') open++;
            else close++;
        }
    }
    return (open==close) ? "Yes" : "No";
}