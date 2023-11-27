int count = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower); // convert the string to lowercase
    
    if (s.back() == 'y') {
        count--;
    }
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
    }
    
    return count;
}