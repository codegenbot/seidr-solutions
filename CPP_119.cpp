Here is the completed code:

string match_parens(vector<string> lst){
    int open = 0;
    int close = 0;

    for(int i = 0; i < lst.size(); i++){
        if(lst[i][0] == '(')open++;
        else close++;

        if(open + close > 0 && (lst[i][0] == ')' && open <= close || lst[i][0] == '(' && close > 0)){
            return "No";
        }
    }

    if(open != close){
        return "No";
    }

    return "Yes";
}