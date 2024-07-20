string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(!ispunct(c) && !isalpha(c) || (c >= 'a' && c <= 'z') && (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'))
            result += c;
    }
    return result;
}