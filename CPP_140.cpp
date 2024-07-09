string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ')){
            result += '_';
        }
        else if(text[i] == ' ' && i+1 < text.length() && text[i+1] == ' '){
            int count = 2;
            while(i+count < text.length() && text[i+count] == ' ')
                count++;
            for(int j=0; j<count; j++)
                result += '-';
            i+=count-1;
        }
        else
            result += text[i];
    }
    return result;
}