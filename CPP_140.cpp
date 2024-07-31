string result = "";
    bool lastWasSpace = false;
    int spaceCount = 0;
    
    for(char c : text){
        if(c == ' '){
            spaceCount++;
            if(spaceCount > 2){
                if(!lastWasSpace){
                    result += "-";
                    lastWasSpace = true;
                }
            } else {
                result += "_";
                lastWasSpace = false;
            }
        } else {
            result += c;
            lastWasSpace = false;
            spaceCount = 0;
        }
    }
    
    return result;
}