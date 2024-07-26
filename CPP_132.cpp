int left_count = 0;
    int right_count = 0;
    
    for(char c : str) {
        if(c == '[') {
            left_count++;
        } else if(c == ']') {
            if(left_count == 0) {
                right_count++;
            } else {
                left_count--;
            }
        }
    }
    
    return left_count < right_count;
}