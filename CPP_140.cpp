string fix_spaces(string text){
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            text[i] = '_';
            if(i+2<text.length() && text[i+1] == ' ' && text[i+2] == ' '){
                int j = i+1;
                while(j<text.length() && text[j] == ' '){
                    text[j] = '-';
                    j++;
                }
            }
        }
    }
    return text;
}