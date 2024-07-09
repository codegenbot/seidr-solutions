int open = 0;
    int closed = 0;
    for(const string& s : lst){
        for(char c : s){
            if(c == '('){
                open++;
            } else {
                if(open == 0){
                    closed++;
                } else {
                    open--;
                }
            }
        }
    }
    return (open == 0 && closed <= 1) ? "Yes" : "No";
}