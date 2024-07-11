for (char &c : s) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    
    size_t i = 0, j = s.size() - 1;
    while (i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    
    return s;
}