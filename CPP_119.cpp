string match_parens(vector<string> lst){
    int openCount = 0;
    int closeCount = 0;
    
    for(string s : lst){
        for(char c : s){
            if(c == '('){
                openCount++;
            } else {
                if(openCount > 0){
                    openCount--;
                } else {
                    closeCount++;
                }
            }
        }
    }
    
    if(openCount == 0 && closeCount == 0){
        return "Yes";
    } else {
        return "No";
    }
}