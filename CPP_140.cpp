string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.size(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ') && (i==text.size()-1 || text[i+1] != ' ')){
            result += '_';
        } else if(text[i] == ' '){
            bool consecutive = false;
            for(int j=i; j<text.size(); j++){
                if(text[j] == ' '){
                    consecutive = true;
                    i = j;
                    break;
                }
                if(!consecutive) {
                    result += '-';
                    break;
                }
            }
        } else {
            result += text[i];
        }
    }
    return result;
}