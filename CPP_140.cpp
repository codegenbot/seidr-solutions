string fix_spaces(string text){
    string result;
    int count = 0;
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            if(count < 2){
                result += '_';
                count++;
            }
            else{
                result += '-';
                count = 0;
            }
        }
        else{
            result += text[i];
            count = 0;
        }
    }
    return result;
}