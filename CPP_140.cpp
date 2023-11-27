string fix_spaces(string text){
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            text[i] = '_';
            if(i+1 < text.length() && text[i+1] == ' '){
                text[i+1] = '-';
                int j = i+2;
                while(j < text.length() && text[j] == ' '){
                    text.erase(j, 1);
                }
            }
        }
    }
    return text;
}