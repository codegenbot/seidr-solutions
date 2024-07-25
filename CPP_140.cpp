string result;
    bool prevSpace = false;
    int spaceCount = 0;
    
    for(char c : text){
        if(c == ' '){
            spaceCount++;
            if(spaceCount > 2){
                if(!prevSpace){
                    result += '-';
                    prevSpace = true;
                }
            } else {
                result += '_';
            }
        } else {
            result += c;
            prevSpace = false;
            spaceCount = 0;
        }
    }
    
    return result;
}