string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (result.empty() || (i > 0 && result.back() != ' ') || i >= text.length()-2)){
            if(result.size() < 3) result += '_';
            else {
                result.pop_back();
                result.push_back('-');
            }
        }else{
            result += text[i];
        }
    }
    return result;
}