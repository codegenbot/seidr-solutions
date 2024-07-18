bool is_nested(string str){
    int level = 0;
    for(char c : str){
        if(c == '['){
            level++;
        } else if(c == ']' && level > 0){
            level--;
        }
    }
    return level < 0;
}