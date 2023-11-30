int how_many_times(string str, string substring) {
    int count = 0;
    int sub_len = substring.length();
    int str_len = str.length();
    
    for (int i = 0; i <= str_len - sub_len; i++) {
        if (str.substr(i, sub_len) == substring) {
            count++;
        }
    }
    
    return count;
}