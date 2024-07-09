int totalOpen = 0, totalClose = 0;

for(auto str : lst) {
    for(char c : str) {
        if(c == '(') totalOpen++;
        else if(c == ')') totalClose++;
    }
}

if(totalOpen == totalClose)
    return "Yes";
else
    return "No";