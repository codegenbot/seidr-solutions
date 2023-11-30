int count_upper(string s){
    int count = 0;
    for (int i = 0; i < s.length(); i += 2) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            char c = tolower(s[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                count++;
            }
        }
    }
    return count;
}