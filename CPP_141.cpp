for(int i=0; i<file_name.length(); i++){
    char c = file_name[i];
    if(c >= '0' && c <= '9'){
        digit_count++;
    } else if(c == '.'){
        has_dot = true;
    } else if(!has_dot && !isalpha(c)){
        return "No";
    }
    i++;