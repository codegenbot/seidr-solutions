bool is_nested(string str){
    int open_count = 0;
    for(char c : str){
        if(c == '['){
            open_count++;
        } else if(c == ']' && open_count > 0){
            open_count--;
        }
    }
    return open_count < str.length() / 2 && open_count > 0;
}