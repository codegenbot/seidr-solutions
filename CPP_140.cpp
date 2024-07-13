string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ') && (i==text.length()-1 || text[i+1] != ' ')){
            result += '_';
        } else if(text[i] == ' '){
            int j = i;
            while(j > 0 && text[j-1] == ' '){
                j--;
            }
            if(i-j>2)result += '-';
            else result += '_';
            i = j;
        } else {
            result += text[i];
        }
    }
    return result;
}