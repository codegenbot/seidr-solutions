```
string remove_vowels(string text) {
    string result;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u') {
            result += text[i];
        }
    }
    return result;
}
```