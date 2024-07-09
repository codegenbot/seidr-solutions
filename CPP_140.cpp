string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (result.empty() || result.back() != ' ')){
            result += ' ';
        } else if(text[i] == ' ' && !result.empty() && result.back() == ' '){
            if(result.size() > 2) result.pop_back();
            else result += '-';
        } else {
            result += text[i];
        }
    }
    for(int i=0; i<result.length(); i++){
        if(result[i] == ' '){
            result[i] = '_';
        }
    }
    return result;
}