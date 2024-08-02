string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            if(i < text.length() - 1 && text[i+1] == ' '){
                if(result.length() > 0) result += '-';
                else continue;
            }
            else if(result.length() > 0) result += '_';
            else result += text[i];
        }else{
            result += text[i];
        }
    }
    return result;
}