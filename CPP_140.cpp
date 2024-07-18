string result = "";
    bool prev_space = false;
    int consecutive_spaces = 0;
    for(char c : text){
        if(c == ' '){
            if(prev_space){
                consecutive_spaces++;
            } else {
                prev_space = true;
                consecutive_spaces = 1;
            }
        } else {
            if(consecutive_spaces > 2){
                result += '-';
            } else {
                result += (prev_space) ? '_' : c;
            }
            prev_space = false;
            consecutive_spaces = 0;
        }
    }
    if(consecutive_spaces > 2){
        result += '-';
    } else {
        result += (prev_space) ? '_' : text[text.size() - 1];
    }
    return result;
}