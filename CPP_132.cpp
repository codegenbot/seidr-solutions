bool is_nested(string str){
    int openCount = 0;
    bool nested = false;
    for(char ch : str) {
        if(ch == '[') {
            openCount++;
        } else if(ch == ']') {
            if(openCount > 1) {
                nested = true;
            }
            openCount--;
        }
    }
    return nested;
}