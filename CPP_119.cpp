Here is the completed code:

string match_parens(vector<string> lst){
    string s1 = lst[0], s2 = lst[1];
    int count = 0;
    
    for(int i=0; i<s1.size(); i++){
        if(s1[i] == '(') count++;
        else if(count > 0) count--;
    }
    
    for(int i=0; i<s2.size(); i++){
        if(s2[i] == ')') count--;
        else if(count < 0) return "No";
        else count++;
    }
    
    if(count == 0) return "Yes";
    else return "No";
}