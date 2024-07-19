string fix_spaces(string text){
    string result = "";
    int count = 0;
    
    for(char c : text){
        if(c == ' '){
            count++;
            if(count > 2){
                if(result.back() != '-'){
                    result += "-";
                }
            }
        } else{
            count = 0;
            result += (c == ' ') ? '_' : c;
        }
    }
    
    return result;
}