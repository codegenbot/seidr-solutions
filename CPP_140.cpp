string fix_spaces(string text){
    int n = text.length();
    string result = "";
    int consecutive_spaces = 0;
    
    for(int i=0; i<n; i++){
        if(text[i] == ' '){
            consecutive_spaces++;
            if(consecutive_spaces > 2){
                result += "-";
            }else{
                result += "_";
            }
        }else{
            result += text[i];
            consecutive_spaces = 0;
        }
    }
    
    return result;
}