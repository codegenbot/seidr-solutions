int how_many_times(string str, string substring) {
    int count = 0;
    int length = substring.length();
    for(int i=0; i<str.length(); i++) {
        if(i+length <= str.length()) {
            if(str.substr(i, length).compare(substring) == 0)
                count++;
        }
    }
    return count;
}