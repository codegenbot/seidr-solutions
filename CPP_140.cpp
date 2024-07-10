string fix_spaces(string text){
    string result = "";
    int count = 0;

    for(int i=0; i < text.length(); i++){
        if(text[i] == ' '){
            if(count > 2) {
                result += "-";
            } else {
                result += '_';
            }
            count = 0;
        }else{
            while(count > 0){
                result += ' ';
                --count;
            }
            result += text[i];
            ++count;
        }
    }

    return result;
}