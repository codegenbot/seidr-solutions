string encode(string message){
    auto swap_case = [](char c) -> char {
        if (islower(c)) return toupper(c);
        if (isupper(c)) return tolower(c);
        return c;
    };
    
    auto replace_vowel = [](char c) -> char {
        switch(tolower(c)) {
            case 'a': return c + 2;
            case 'e': return c + 2;
            case 'i': return c + 2;
            case 'o': return c + 2;
            case 'u': return c + 2;
            default: return c;
        }
    };
    
    for (char &c : message) {
        c = swap_case(c);
        c = replace_vowel(c);
    }
    return message;
}