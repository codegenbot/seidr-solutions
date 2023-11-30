int count_upper(string s){
    int count = 0;
    for (int i = 0; i < s.length(); i += 2) {
        char ch = s[i];
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}