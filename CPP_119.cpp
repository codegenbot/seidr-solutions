string match_parens(vector<string> lst){
    int count = 0;
    for(string str : lst){
        for(char c : str){
            if(c == '('){
                count++;
            }else{
                count--;
            }
        }
    }
    if(count == 0){
        return "Yes";
    }else{
        return "No";
    }
}