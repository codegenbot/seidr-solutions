string fix_spaces(string text){
    string result = "";
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' ' && (i == 0 || text[i-1] != ' ') && (i == text.length() - 1 || text[i+1] != ' ')){
            result += '_';
        } else if(text[i] == ' '){
            bool consecutive = true;
            for(int j = i + 1; j < text.length(); j++){
                if(text[j] != ' '){
                    consecutive = false;
                    break;
                }
            }
            if(consecutive){
                result += '-';
                i = text.length() - 1;
            } else {
                result += '_';
            }
        } else {
            result += text[i];
        }
    }
    return result;
}