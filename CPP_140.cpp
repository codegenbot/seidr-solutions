string fix_spaces(string text){
    string new_text = "";
    for(int i=0; i < text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ') && (i == text.length()-1 || text[i+1] != ' ')){
            new_text += '_';
        }else{
            new_text += text[i];
        }
    }
    return new_text;
}