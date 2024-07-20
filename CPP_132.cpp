int open = 0;
    for(char c : str){
        if(c == '['){
            open++;
        }
        else if(c == ']' && open > 0){
            open--;
        }
    }
    return open < str.length() && open > 0;
}