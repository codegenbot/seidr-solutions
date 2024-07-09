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
            int k = i;
            while(k < text.length() - 1 && text[k+1] == ' '){
                k++;
            }
            if(i != j || i != k) result += '-';
            else result += ' ';
        } else {
            result += text[i];
        }
    }
    return result;
}