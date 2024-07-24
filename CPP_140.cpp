string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ') && (i==text.length()-1 || text[i+1] != ' ')){
            result += '_';
        } else if(text[i] == ' '){
            if(result.length() > 2 && result[result.length()-1] == ' ' && result[result.length()-2] == ' '){
                result = result.substr(0, result.length()-1) + '-';
            } else {
                result += '-';
            }
        } else{
            result += text[i];
        }
    }
    return result;
}