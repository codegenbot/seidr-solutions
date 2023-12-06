```
int remove_vowels(std::string text) {
    std::string vowels = "aeiou";
    std::string result;
    for (auto it = text.begin(); it != text.end(); ++it) {
        if (vowels.find(*it) == std::string::npos) {
            result += *it;
        }
    }
    return result;
}
```