string fix_spaces(string text){
    string result = "";
    bool inSpaceSequence = false;
    
    for(char c : text){
        if(c == ' '){
            if(!inSpaceSequence){
                inSpaceSequence = true;
                result += '_';
            }
            else{
                result += '-';
            }
        }
        else{
            inSpaceSequence = false;
            result += c;
        }
    }
    
    return result;
}