int left = 0, right = 0;
    for(char c : str) {
        if(c == '[') {
            left++;
        } else if(c == ']' && left > 0) {
            left--;
            right++;
        }
    }
    return right > 0;
}