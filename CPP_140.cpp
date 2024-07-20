string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ') && (i+1 >= text.length() || text[i+1] != ' ')){
            result += text[i];
        }else if(text[i] == ' '){
            int j = i;
            while(j > 0 && text[j-1] == ' ')
                j--;
            result += '_';
            for(int k=j; k<i; k++)
                result += ' ';
            if(i+1 < text.length() && text[i+1] == ' '){
                result += '-';
                i++;
            }
        }else{
            result += text[i];
        }
    }
    return result;
}