string result = s;
    for(char& c : result) {
        if(isalpha(c)){
            int shift = (c - 'a') * 2 + 2;
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + shift) % 26 + base;
        }
    }
    return result;