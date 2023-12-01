bool is_nested(string str){
    int open = 0; // variable to track number of open brackets
    int close = 0; // variable to track number of close brackets

    for(int i = 0; i < str.length(); i++){
        if(str[i] == '['){ // if an open bracket is encountered
            open++;
        }
        else if(str[i] == ']'){ // if a close bracket is encountered
            close++;
        }
    }

    if(open > 0 && close > 0 && open != close){ // if both open and close brackets are present and they are not equal in count
        return true;
    }

    return false;
}