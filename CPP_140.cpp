string fix_spaces(string text){
    int consecutiveSpaces = 0;
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' '){
            consecutiveSpaces++;
            if(consecutiveSpaces > 2){
                text[i] = '-';
            } else {
                text[i] = '_';
            }
        } else {
            consecutiveSpaces = 0;
        }
    }
    return text;
}