int consecutiveSpaces = 0;
    string result = "";
    
    for(char& c : text){
        if(c == ' '){
            consecutiveSpaces++;
            if(consecutiveSpaces <= 2){
                result += '_';
            } else {
                if(consecutiveSpaces == 3){
                    result.pop_back(); // Remove previous underscore
                }
                result += '-';
            }
        } else {
            consecutiveSpaces = 0;
            result += c;
        }
    }
    
    return result;
}