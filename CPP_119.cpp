string match_parens(vector<string> lst){
    string s1 = lst[0];
    string s2 = lst[1];
    int count = 0;
    for(char c : s1){
        if(c == '('){
            count++;
        }else{
            count--;
        }
    }
    for(char c : s2){
        if(c == '('){
            count++;
        }else{
            count--;
        }
    }
    if(count == 0){
        return "Yes";
    }else{
        return "No";
    }
}