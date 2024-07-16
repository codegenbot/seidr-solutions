int count = 0;
    string result = "";
    
    for(char c : text) {
        if(c == ' ') {
            count++;
            if(count > 2) {
                result += '-';
                count = 0;
            }
            else {
                result += '_';
            }
        }
        else {
            count = 0;
            result += c;
        }
    }
    
    return result;
}