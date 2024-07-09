string fix_spaces(string text){
    string new_text = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            if(i < text.length()-1 && text[i+1] == ' ' && text.find(' ',i+2) == string::npos){
                new_text += "-";
            } else {
                new_text += "_";
            }
        } else {
            new_text += text[i];
        }
    }
    return new_text;
}