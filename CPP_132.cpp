int count = 0;
    for(char bracket : str) {
        if(bracket == '[') {
            count++;
        } else if(bracket == ']' && count > 0) {
            count--;
            if(count == 0) {
                return true;
            }
        }
    }
    return false;
}