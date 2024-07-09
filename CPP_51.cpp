string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!ispunct(c) && !isupper(c) && !islower(c)) continue;
        bool isVowel = false;
        switch (c) {
            case 'a':
            case 'A': 
                isVowel = true; break;
            case 'e':
            case 'E': 
                isVowel = true; break;
            case 'i':
            case 'I': 
                isVowel = true; break;
            case 'o':
            case 'O': 
                isVowel = true; break;
            case 'u':
            case 'U': 
                isVowel = true; break;
        }
        if (!isVowel) result += c;
    }
    return result;
}