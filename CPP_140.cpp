string fix_spaces(string text){
    for(int i=0; i<text.length();i++){
        if(text[i] == ' '){
            if(i+1 < text.length() && text[i+1] == ' '){
                int j = i;
                while(j+1 < text.length() && text[j+1] == ' ')
                    j++;
                for(int k=j; k>=i;k--)
                    text[k] = '-';
                return text;
            }
            else
                text[i] = '_';
        }
    }
    return text;
}