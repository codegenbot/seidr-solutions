string fix_spaces(string text){
    for(int i = 0; i < text.length(); ++i){
        if(text[i] == ' ' && (i == 0 || text[i-1] != ' ') && (i == text.length()-1 || text[i+1] != ' ')){
            text.replace(i, 1, "_");
        }else if(text[i] == ' ' && i > 0 && i < text.length() - 1){
            bool is_consecutive = true;
            for(int j = i-1; j >= 0 && text[j] == ' '; --j){
                ++i;
                is_consecutive = false;
            }
            if(is_consecutive){
                text.replace(i, 1, "-");
            }
        }
    }
    return text;
}