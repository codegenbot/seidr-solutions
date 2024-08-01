string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ') && (i+1 < text.length() && text[i+1] != ' ')){
            result += "_";
        } else {
            if(result[result.length()-1] == ' '){
                for(int j=i; j>0 && text[j-1] == ' '; j--){
                    i--;
                }
                if(i > 0 && text[i-1] != ' '){
                    result.pop_back();
                }
                result += "-";
            } else {
                result += text[i];
            }
        }
    }
    return result;
}