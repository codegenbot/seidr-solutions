string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ') && (i==text.length()-1 || text[i+1] != ' ')){
            result += '_';
        } else if(text[i] == ' ' && (result.length() > 0) && (result[result.length()-1] == '_') ){
            result += '-';
        } else {
            result += text[i];
        }
    }
    return result;
}