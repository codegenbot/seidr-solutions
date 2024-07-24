Here is the solution:

string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (result.empty() || (result.back() != ' ' && result.back() != '-'))){
            result += (result.empty()) ? "" : "_";
        } else {
            result += text[i];
        }
    }
    return result;
}