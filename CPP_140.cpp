int count = 0;
    bool consecutive = false;
    string result = "";
    
    for(char c : text){
        if(c == ' '){
            count++;
            if(count > 2){
                if(!consecutive){
                    result += '-';
                    consecutive = true;
                }
            } else {
                result += '_';
            }
        } else {
            count = 0;
            consecutive = false;
            result += c;
        }
    }
    
    return result;
}