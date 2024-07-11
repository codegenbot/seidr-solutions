string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ') && (i==text.length()-1 || text[i+1] != ' ')){
            result += '_';
        }
        else if(text[i] == ' '){
            int count = 1;
            for(int j=i+1; j<text.length() && text[j] == ' '; j++, count++);
            if(count > 2){
                for(int k=0; k<count-2; k++)
                    result += '-';
            }
            i+=count-1;
        }
        else
            result += text[i];
    }
    return result;
}