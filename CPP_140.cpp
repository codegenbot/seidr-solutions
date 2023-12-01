string fix_spaces(string text){
    int n = text.length();
    string result = "";
    
    for(int i=0; i<n; i++){
        if(text[i] == ' '){
            if(i+2 < n && text[i+1] == ' ' && text[i+2] == ' '){
                result += "-";
                i += 2;
            }
            else{
                result += "_";
            }
        }
        else{
            result += text[i];
        }
    }
    
    return result;
}