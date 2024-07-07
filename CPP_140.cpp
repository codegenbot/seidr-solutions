string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ') && (i==text.length()-1 || text[i+1] != ' ')){
            result += '_';
        }else if(i>1 && text[i] == ' ' && text[i-1] == ' ' && text[i-2] == ' '){
            result += '-';
        }else{
            result += text[i];
        }
    }
    return result;
}