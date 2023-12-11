```
std::string encode(const std::string& message) {
    std::string encoded;
    for (auto c : message) {
        if (isalpha(c)) {
            char new_char = 'A' + (c - 'a');
            if (new_char > 'Z') {
                new_char -= 26;
            }
            encoded += new_char;
        } else {
            encoded += c;
        }
    }
    return encoded;
}
```