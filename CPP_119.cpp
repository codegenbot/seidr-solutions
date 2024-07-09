int countOpen = 0;
int countClose = 0;

for(string s : lst){
    for(char c : s){
        if(c == '(') countOpen++;
        else if(c == ')') countClose++;
    }
}

if(countOpen == countClose) return "Yes";
else return "No";