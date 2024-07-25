int count_upper(string s){
    int count = 0;
    for (int i = 0; i < s.length(); i += 2) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z' && (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            count++;
        }
    }
    return count;
}