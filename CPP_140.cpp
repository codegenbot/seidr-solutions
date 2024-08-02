string fix_spaces(string text){
    string new_text = "";
    bool was_space = false;

    for(char c : text){
        if(c == ' ' && !was_space){
            new_text += '_';
            was_space = true;
        }else if(c != ' ' || (!was_space && was_space)){
            new_text += c;
            was_space = (c == ' ');
        }
    }

    return new_text;
}