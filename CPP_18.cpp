int how_many_times(string str, string substring) {
    int count = 0;
    int subLen = substring.length();
    int strLen = str.length();
    
    if (subLen == 0) {
        return 0;
    }
    
    for (int i = 0; i <= strLen - subLen; i++) {
        bool match = true;
        for (int j = 0; j < subLen; j++) {
            if (str[i + j] != substring[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            count++;
        }
    }
    
    return count;
}