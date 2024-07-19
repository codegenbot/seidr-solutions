string fix_spaces(string text){
    string result = "";
    bool prev_space = false;

    for(char c : text){
        if(c == ' ' && !prev_space){
            result += '_';
            prev_space = true;
        }else if(c == ' ' && prev_space){
            if(result.length() > 1 && result.back() == '-'){
                continue;
            }
            result += '-';
            prev_space = true;
        }else{
            if(prev_space) {
                result += '_';
                prev_space = false;
            }
            result += c;
        }
    }

    return result;
}