string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length();i++){
        if(text[i] == ' ' && (result.empty() || i==0)){
            result += '_';
        }else if(text[i] == ' ' && i>0 && result.back() == ' '){
            while(i+1 < text.length() && text[i+1] == ' ') i++;
            result += '-';
        }else{
            result += text[i];
        }
    }
    return result;
}