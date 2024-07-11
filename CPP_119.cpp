string match_parens(vector<string> lst){
    int open = 0;
    int close = 0;

    for(int i = 0; i < lst[0].size(); i++){
        if(lst[0][i] == '(') open++;
        else if(lst[0][i] == ')') close++;

        if(i < lst[1].size()){
            if(lst[1][i] == '(') close++;
            else if(lst[1][i] == ')') open--;
        }
    }

    return (open == 0 && close == 0) ? "Yes" : "No";
}