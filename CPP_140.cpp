string fix_spaces(string text){
    string result = "";
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' ' && (i == 0 || text[i-1] != ' ')){
            result += '_';
        } else if(text[i] == ' '){
            bool is_consecutive = true;
            for(int j = i+1; j < text.length() && j > 0; j++){
                if(text[j] == ' '){
                    is_consecutive = true;
                    break;
                } else {
                    is_consecutive = false;
                }
            }
            if(is_consecutive){
                result += '-';
                i = text.length();
            } else {
                result += '_';
            }
        } else {
            result += text[i];
        }
    }
    return result;
}