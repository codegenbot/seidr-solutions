string fix_spaces(string text){
    string result = "";
    bool prev_space = false;

    for(char c : text){
        if(c == ' '){
            if(prev_space) {
                result += '-';
                prev_space = false;
            } else {
                result += '_';
                prev_space = true;
            }
        } else {
            result += c;
            prev_space = false;
        }
    }

    return result;
}