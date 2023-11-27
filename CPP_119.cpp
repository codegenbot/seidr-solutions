string match_parens(vector<string> lst){
    string s = lst[0] + lst[1];

    int cnt = 0;
    for(char c : s){
        if(c == '(') cnt++;
        else cnt--;

        if(cnt < 0) return "No";
    }

    if(cnt == 0) return "Yes";
    else return "No";
}