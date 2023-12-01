string match_parens(vector<string> lst){
    string result = "Yes";
    int count = 0;
    for(string s: lst){
        for(char c: s){
            if(c == '(')
                count++;
            else if(c == ')'){
                if(count == 0){
                    result = "No";
                    break;
                }
                else
                    count--;
            }
        }
        if(result == "No")
            break;
    }
    if(count != 0)
        result = "No";
    return result;
}