
The issue with the current implementation is that it is converting all characters to uppercase, rather than just the first character of each word. To fix this, you can modify the `toCamelCase` function to only convert the first character of each word to uppercase:
```
// Convert a string to camelCase
std::string toCamelCase(const std::string& str) {
    std::string output;
    for (int i = 0; i < str.size(); i++) {
        if (i == 0 || str[i] != ' ') {
            output += toupper(str[i]);
        } else {
            output += tolower(str[i]);
        }
    }
    
    return output;
}
```
This will ensure that only the first character of each word is converted to uppercase, while all other characters remain unchanged.