string fix_spaces(string text){
    string result = "";
    bool consecutive = false;
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            if(i+1 < text.length() && text[i+1] == ' '){
                if(!consecutive){
                    result += "-";
                    consecutive = true;
                }
            }
            else{
                result += "_";
                consecutive = false;
            }
        }
        else{
            result += text[i];
            consecutive = false;
        }
    }
    return result;
}