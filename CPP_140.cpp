```
string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (result.empty() || (i > 0 && result.back() == ' ') || (i < text.length()-1 && text[i+1] == ' '))){
            if(result.size() >= 2 && result.back() == ' '){
                result.pop_back();
                while(i + 1 < text.length() && text[i+1] == ' ')
                    i++;
                result += '-';
            }
            else
                result += '_';
        } 
        else
            result += text[i];
    }
    return result;
}