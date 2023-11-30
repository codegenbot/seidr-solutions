string match_parens(vector<string> lst){
    string result = "";
    for(string s : lst){
        result += s;
    }
    
    int count = 0;
    for(char c : result){
        if(c == '('){
            count++;
        }else if(c == ')'){
            count--;
        }
        
        if(count < 0){
            return "No";
        }
    }
    
    return count == 0 ? "Yes" : "No";
}