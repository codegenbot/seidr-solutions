string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (result.empty() || result.back() != ' ')){
            result += text[i];
        } else if(i > 0 && text[i-1] == ' ' && text[i] == ' '){
            result += '-';
        } else {
            result += text[i];
        }
    }
    return result;
}