string fix_spaces(string text){
    string output;
    int consecutiveSpaces = 0;
    
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            if(consecutiveSpaces > 1){
                output += "-";
                consecutiveSpaces = 0;
            }
            else{
                output += "_";
                consecutiveSpaces++;
            }
        }
        else{
            output += text[i];
            consecutiveSpaces = 0;
        }
    }
    return output;
}