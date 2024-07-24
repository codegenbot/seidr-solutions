string fix_spaces(string text){
    string result = "";
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' ' && (i == 0 || text[i-1] != ' ') && (i == text.length() - 1 || text[i+1] != ' ')){
            result += '_';
        } else if(text[i] == ' ' && (result[result.length()-1] == '_' || result[result.length()-1] == '-')){
            continue;
        } else {
            result += text[i];
        }
    }
    for(int i = 0; i < result.length() - 1; i++){
        if(result[i] == ' ' && result[i+1] == ' '){
            result.replace(i, 2, "-");
            i++;
        }
    }
    return result;
}