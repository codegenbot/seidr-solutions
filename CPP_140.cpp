string result = "";
    bool isConsecutive = false;
    for(char c : text){
        if(c == ' '){
            if(!isConsecutive){
                result += '_';
                isConsecutive = true;
            } else {
                result += '-';
            }
        } else {
            result += c;
            isConsecutive = false;
        }
    }
    return result;
}