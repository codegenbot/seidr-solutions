bool is_nested(string str){
    int openCount = 0, nestedCount = 0;
    for(char c : str){
        if(c == '[') {
            openCount++;
        } else if(c == ']') {
            if(openCount > 0) {
                openCount--;
                nestedCount++;
            }
        }
    }
    return nestedCount > 1;
}