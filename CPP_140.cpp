string fix_spaces(string text){
    string result = "";
    int consecutiveSpaces = 0;
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            consecutiveSpaces++;
            if(consecutiveSpaces > 2){
                result += "-";
                consecutiveSpaces = 0;
            }
        }
        else{
            if(consecutiveSpaces > 0){
                result += "-";
                consecutiveSpaces = 0;
            }
            result += text[i];
        }
    }
    if(consecutiveSpaces > 0){
        result += "-";
    }
    return result;
}