string result;
    bool lastSpace = false;
    int consecutiveSpaces = 0;
    for(char c : text){
        if(c == ' '){
            if(lastSpace){
                consecutiveSpaces++;
            } else {
                lastSpace = true;
                consecutiveSpaces = 1;
            }
            if(consecutiveSpaces > 2){
                result.pop_back();
                result.pop_back();
                result += "-";
            } else {
                result += '_';
            }
        } else {
            result += c;
            lastSpace = false;
            consecutiveSpaces = 0;
        }
    }
    return result;
}