string fix_spaces(string text){
    string result = "";
    int count_consecutive_spaces = 0;
    for(char c : text){
        if(c == ' '){
            count_consecutive_spaces++;
            if(count_consecutive_spaces > 2){
                result += '-';
            } else {
                result += '_';
            }
        } else {
            count_consecutive_spaces = 0;
            result += c;
        }
    }
    return result;
}