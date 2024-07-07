string fix_spaces(string text){
    string result = "";
    bool prev_space = false;

    for(char c : text){
        if(c == ' ' && !prev_space){
            result += '_';
            prev_space = true;
        }
        else if(c == ' ' && prev_space){
            if(result.size() > 1 && result.back() == '-'){
                result.pop_back();
            }
            else{
                result += '-';
            }
            prev_space = false;
        }
        else{
            result += c;
            prev_space = (c == ' ');
        }
    }

    return result;
}