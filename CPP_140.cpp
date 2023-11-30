string fix_spaces(string text){
    int n = text.length();
    string result = "";
    int consecutiveSpaces = 0;
    for(int i=0; i<n; i++){
        if(text[i] == ' '){
            if(consecutiveSpaces >= 2){
                result += "-";
                consecutiveSpaces = 0;
            }
            else{
                result += "_";
                consecutiveSpaces++;
            }
        }
        else{
            result += text[i];
            consecutiveSpaces = 0;
        }
    }
    return result;
}