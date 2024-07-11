```
std::string remove_vowels(std::string text){
    std::string result = "";
    for (char c : text) {
        if (!isalpha(c)) {
            result += c;
        } else if (!std::strncasecmp(&c, "aeiouAEIOU", 6)) {
            continue;
        }
        result += c;
    }
    return result;
}