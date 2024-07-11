int count = 0;
    string vowels = "aeiou";
    
    for (int i = 0; i < s.length(); ++i) {
        char c = tolower(s[i]);
        if (vowels.find(c) != string::npos) {
            count++;
        } else if (i == s.length() - 1 && c == 'y') {
            count++;
        }
    }
    
    return count;
}