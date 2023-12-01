string fix_spaces(string text){
    int n = text.length();
    string result = "";
    int consecutiveSpaces = 0;
    for(int i=0; i<n; i++){
        if(text[i] == ' '){
            consecutiveSpaces++;
            if(consecutiveSpaces > 2){
                result += "-";
            }
            else{
                result += "_";
            }
        }
        else{
            result += text[i];
            consecutiveSpaces = 0;
        }
    }
    return result;
}