string match_parens(vector<string> lst){
    int count = 0;
    for(int i = 0; i < lst.size(); i++){
        string s = lst[i];
        for(int j = 0; j < s.size(); j++){
            if(s[j] == '('){
                count++;
            }
            else{
                count--;
            }
        }
    }
    if(count == 0){
        return "Yes";
    }
    else{
        return "No";
    }
}