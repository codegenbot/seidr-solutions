string fix_spaces(string text){
    string new_text = "";
    for(int i=0; i < text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ') && (i==text.length()-1 || text[i+1] != ' ')){
            new_text += "_";
        }else if(text[i] == ' '){
            int count = 0;
            while(i + count < text.length() && text[i + count] == ' '){
                count++;
            }
            new_text += string(1, '_');
            for(int j=1; j < count; j++){
                new_text += "-";
            }
            i += count - 1;
        }else{
            new_text += text[i];
        }
    }
    return new_text;
}