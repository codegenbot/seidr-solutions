string fix_spaces(string text){
    string result = "";
    bool consecutiveSpace = false;

    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && !consecutiveSpace){
            result += '_';
            consecutiveSpace = true;
        }else if(text[i] == ' '){
            if(consecutiveSpace){
                result += '-';
                consecutiveSpace = false;
            }
        }else{
            result += text[i];
            consecutiveSpace = false;
        }
    }

    return result;
}