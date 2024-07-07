string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            if(i < text.length() - 1 && text[i+1] == ' ' && text.find(' ', i+2) != string::npos){
                while(i < text.length() - 1 && text[i+1] == ' '){
                    i++;
                }
                result += "-";
            } else {
                if(result.length() > 0) result += "_";
                result += " ";
            }
        } else {
            result += text[i];
        }
    }
    return result;
}