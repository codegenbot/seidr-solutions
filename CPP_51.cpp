```cpp
std::string std::remove_vowels(std::string text){
    for (int i = 0; i < text.size(); i++){
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u'
            || tolower(text[i]) == 'a' || tolower(text[i]) == 'e' || tolower(text[i]) == 'i'
            || tolower(text[i]) == 'o' || tolower(text[i]) == 'u'){
            text.erase(i, 1);
            i--;
        }
    }
    return text;
}