string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!ispunct(c) && !isupper(c) && !islower(c)) continue;
        bool isVowel = false;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
            isVowel = true;
        if (!isVowel)
            result += c;
    }
    return result;
}