bool is_nested(string str){
    int depth = 0;
    bool nested = false;
    for(char ch : str) {
        if(ch == '[') {
            depth++;
            if(depth > 1) nested = true;
        } else if(ch == ']') {
            if(depth > 0) depth--;
        }
    }
    return nested;
}