string fix_spaces(string text){
    string result = "";
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' '){
            if(i == 0 || text[i-1] != ' '){
                result += '_';
            } else {
                int j = i;
                while(j > 0 && text[j-1] == ' ') j--;
                result += '-';
                for(int k = j; k < i; k++) result += text[k];
                i = j - 1;
            }
        } else {
            result += text[i];
        }
    }
    return result;
}