string fix_spaces(string text){
    string result = "";
    bool was_space = false;

    for(char c : text){
        if(c == ' ' && !was_space){
            result += '_';
            was_space = true;
        } else if(c != ' ' || was_space){
            result += c;
            was_space = (c == ' ');
        }
    }

    return result;
}