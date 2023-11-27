string match_parens(vector<string> lst){
    int count = 0;
    for(string str : lst){
        for(char ch : str){
            if(ch == '('){
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