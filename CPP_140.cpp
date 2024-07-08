string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (result.empty() || (i > 0 && result[result.length()-1] != ' '))){
            result += '_';
        }
        else if(result.length() > 2 && text[i] == ' ' && result[result.length()-1] == ' ' && result[result.length()-2] == ' '){
            result += '-';
        }
        else{
            result += text[i];
        }
    }
    return result;
}