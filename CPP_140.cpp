string result = "";
    bool isSpace = false;
    int spaceCount = 0;
    for(char c : text){
        if(c == ' '){
            spaceCount++;
            if(spaceCount > 2){
                if(!isSpace){
                    result += '-';
                }
                isSpace = true;
            } else {
                result += '_';
            }
        } else {
            isSpace = false;
            spaceCount = 0;
            result += c;
        }
    }
    return result;
}