string fix_spaces(string text){
    string result = "";
    int count = 0;

    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' '){
            if(count > 2){
                result += "-";
            } else {
                result += '_';
            }
            count = 0;
        } else {
            while(count > 0 && (text[i] != ' ' || count > 1)){
                result += text[i];
                i--;
                count--;
            }
            if(text[i] == ' '){
                count++;
            } else {
                result += text[i];
            }
        }
    }

    return result;
}