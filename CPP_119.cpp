string match_parens(vector<string> lst){
    int open = 0;
    int close = 0;

    for(int i = 0; i < lst.size(); i++){
        if(lst[i][0] == '(') open++;
        else close++;

        if(open > close) break;

        if(close > open) {
            open -= close - open;
            close = 0;
        }
    }

    return (open == 0)? "Yes" : "No";
}