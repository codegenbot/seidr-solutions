string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            (isalpha(c) && tolower(c) == 'a' && !isalpha(text.find(c)-1)) ||
            (isalpha(c) && tolower(c) == 'e' && !isalpha(text.find(c)-1)) ||
            (isalpha(c) && tolower(c) == 'i' && !isalpha(text.find(c)-1)) ||
            (isalpha(c) && tolower(c) == 'o' && !isalpha(text.find(c)-1)) ||
            (isalpha(c) && tolower(c) == 'u' && !isalpha(text.find(c)-1))
        )){
            result += c;
        }
    }
    return result;
}