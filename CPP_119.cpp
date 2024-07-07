string match_parens(vector<string> lst){
    string str1 = lst[0];
    string str2 = lst[1];
    
    int count1 = 0;
    for(int i=0; i<str1.length(); i++){
        if(str1[i] == '(') count1++;
        else if(str1[i] == ')') count1--;
    }
    
    int count2 = 0;
    for(int i=0; i<str2.length(); i++){
        if(str2[i] == '(') count2++;
        else if(str2[i] == ')') count2--;
    }
    
    return (count1 + count2 == 0) ? "Yes" : "No";
}