string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ')){
            result += '_';
        }else if(text[i] == ' ' && i < text.length()-1 && text[i+1] == ' '){
            int j = i;
            while(j < text.length() - 1 && text[j] == ' '){
                j++;
            }
            for(int k=i; k<=j; k++){
                result += ' ';
            }
            result += '-';
            i = j;
        }else{
            result += text[i];
        }
    }
    return result;
}