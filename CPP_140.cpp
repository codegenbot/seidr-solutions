string fix_spaces(string text){
    string result = "";
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' ' && (i == 0 || text[i-1] != ' ') && (i == text.length()-1 || text[i+1] != ' ')){
            result += '_';
        } else if(text[i] == ' ' && i > 0 && i < text.length() - 1){
            int j = i;
            while(j > 0 && j < text.length() - 1 && text[j] == ' '){
                j++;
            }
            if(j > i) {
                result += '-';
                i = j-1;
            } else {
                result += ' ';
            }
        } else{
            result += text[i];
        }
    }
    return result;
}