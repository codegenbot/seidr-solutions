string fix_spaces(string text){
    string result = "";
    int count = 0;

    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' ' && count > 2) {
            result += '-';
            count = 1;
        } else if(text[i] == ' ') {
            if(count < 2) {
                result += '_';
                count = 1;
            } else {
                result += text[i];
                count++;
            }
        } else {
            if(count > 0) {
                result += text[i];
                count = 1;
            } else {
                result += text[i];
            }
        }
    }

    return result;
}