string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ') && (i+1 >= text.length() || text[i+1] != ' ')){
            result += '_';
        }else if(text[i] == ' ' && i+1 < text.length() && text[i+1] == ' '){
            int count = 0;
            while(i+1 < text.length() && text[i+1] == ' '){
                i++;
                count++;
            }
            result += '-';
        }else{
            result += text[i];
        }
    }
    return result;
}