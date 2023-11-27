string match_parens(vector<string> lst){
    int count = 0;
    for(string s : lst){
        for(char c : s){
            if(c == '(')
                count++;
            else if(c == ')'){
                if(count == 0)
                    return "No";
                count--;
            }
        }
    }
    if(count == 0)
        return "Yes";
    else
        return "No";
}