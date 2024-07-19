Here is the completed code:

string match_parens(vector<string> lst){
    string s1 = lst[0];
    string s2 = lst[1];
    int balance1 = 0;
    int balance2 = 0;

    for(char c : s1){
        if(c == '(') balance1++;
        else if(c == ')') balance1--;
    }

    for(char c : s2){
        if(c == '(') balance2++;
        else if(c == ')') balance2--;
    }

    if(balance1 + balance2 == 0) return "Yes";
    else return "No";
}