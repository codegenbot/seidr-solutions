```cpp
std::string std::remove_vowels(std::string text){
    for(int i=0; i<text.length(); i++){
        char c = text[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           (c >= 'A' && c <= 'U') && (c >= 'a' && c <= 'u')){
            text.erase(i,1);
            i--;
        }
    }
    return text;
}