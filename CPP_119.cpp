string match_parens(vector<string> lst){
    string s = lst[0] + lst[1];
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            count++;
        }
        else{
            count--;
        }
        if(count < 0){
            return "No";
        }
    }
    if(count == 0){
        return "Yes";
    }
    else{
        return "No";
    }
}