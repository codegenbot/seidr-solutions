string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length();i++){
        if(text[i] == ' '){
            if(result.length() < 1 || (result[result.length()-1] != ' ' && result[result.length()-1] != '-')) {
                result += '_';
            } else if(i+1 < text.length() && text[i+1] == ' '){
                int j = i;
                while(j+1 < text.length() && text[j+1] == ' ') j++;
                for(int k=i; k<=j; k++) result += '-';
                i = j;
            }
        } else {
            result += text[i];
        }
    }
    return result;
}