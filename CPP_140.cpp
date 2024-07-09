string fix_spaces(string text){
    string result = "";
    bool prevSpace = false;

    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            if(prevSpace || !result.empty()){
                if(result.length() > 2 && result.back() == ' ' && result.back()-1 == ' ' && result.back()-2 == ' ') {
                    result += "-";
                } else {
                    result += '_';
                }
                prevSpace = true;
            } else {
                result += ' ';
                prevSpace = false;
            }
        } else {
            if(prevSpace) {
                result += text[i];
                prevSpace = false;
            } else {
                result += text[i];
            }
        }
    }

    return result;
}