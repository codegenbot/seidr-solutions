string match_parens(vector<string> lst){
    string str = lst[0] + lst[1];
    int count = 0;

    for(char c : str){
        if(c == '(')
            count++;
        else if(c == ')'){
            if(count == 0)
                return "No";
            count--;
        }
    }

    if(count == 0)
        return "Yes";
    else
        return "No";
}