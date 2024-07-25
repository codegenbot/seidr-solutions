int open_brackets = 0;
    for(char c : str){
        if(c == '['){
            open_brackets++;
        } else if(c == ']' && open_brackets > 0){
            open_brackets--;
        }
    }
    return open_brackets < 0 ? false : true;
}