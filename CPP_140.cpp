string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length();i++){
        if(text[i] == ' ' && (result.length() == 0 || result[result.length()-1] != ' ')){
            result += '_';
        }else{
            if(result.length() > 2 && result[result.length()-1] == ' ' && result[result.length()-2] == ' '){
                result = result.substr(0, result.length()-1) + '-';
            }
            result += text[i];
        }
    }
    return result;
}