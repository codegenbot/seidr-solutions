string result = "";
    bool flag = false;
    for(char c : text){
        if(c == ' '){
            if(flag){
                result += '-';
            } else {
                result += '_';
                flag = true;
            }
        } else {
            result += c;
            flag = false;
        }
    }
    return result;
}