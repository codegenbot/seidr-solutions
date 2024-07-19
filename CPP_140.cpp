string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ') && (i==text.length()-1 || text[i+1] != ' ')){
            result += '_';
        } else if(text[i] == ' '){
            int count = 0;
            while(i < text.length() && text[i] == ' '){
                i++;
                count++;
            }
            if(count > 2) {
                for(int j=0; j<2; j++){
                    result += '_';
                }
                result += '-';
            } else{
                result += '_';
            }
        }else{
            result += text[i];
        }
    }
    return result;
}