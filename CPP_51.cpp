string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(strchr("aeiouAEIOU", c) == NULL)
            result += c;
    }
    return result;
}