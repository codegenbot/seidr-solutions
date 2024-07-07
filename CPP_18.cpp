int how_many_times(string str, string substring) {
    int count = 0;
    int len = substring.length();
    for(int i = 0; i <= str.length() - len; i++) {
        if(str.substr(i, len) == substring) {
            count++;
        }
    }
    return count;
}