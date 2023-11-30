string fix_spaces(string text){
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' '){
            text[i] = '_';
            if(text[i+1] == ' '){
                int j = i+1;
                while(text[j] == ' '){
                    text[j] = '-';
                    j++;
                }
            }
        }
    }
    return text;
}