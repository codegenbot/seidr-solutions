string remove_vowels(string text){
    string result;
    for(char c : text){
        if(strchr("aeiouAEIOU",c) == nullptr)
            result += c;
    }
    return result;
}