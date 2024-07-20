int n = str.size();
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (str[i] == '[') {
            count++;
        } else if (str[i] == ']') {
            count--;
        }
        if (count < 0) {
            return true;
        }
    }
    
    return false;
}