string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            if(i==0 || text[i-1] != ' '){
                result += '_';
            } else {
                int count = 1;
                while(i+1 < text.length() && text[i+1] == ' '){
                    i++;
                    count++;
                }
                for(int j=0; j<count; j++){
                    result += '-';
                }
            }
        } else {
            result += text[i];
        }
    }
    return result;
}