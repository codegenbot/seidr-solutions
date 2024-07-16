string result = "";
    int consecutive_space = 0;
    for(char c : text){
        if(c == ' '){
            consecutive_space++;
            if(consecutive_space > 2){
                result += '-';
                consecutive_space = 1;
            } else {
                result += '_';
            }
        } else {
            result += c;
            consecutive_space = 0;
        }
    }
    return result;
}