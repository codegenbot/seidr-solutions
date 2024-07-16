string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u'){
            result += c;
        }
    }
    return result;
}