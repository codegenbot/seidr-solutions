string fix_spaces(string text){
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            text[i] = '_';
            int j = i+1;
            while(text[j] == ' '){
                text[j] = '-';
                j++;
            }
        }
    }
    return text;
}