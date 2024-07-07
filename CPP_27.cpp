```cpp
std::string flipCase(const std::string& str) -> const std::string {
    std::string result;
    for (char c : str) {
        if ((c >= 'a' && c <= 'z')) {
            result += static_cast<char>(c - 32); // Convert to uppercase
        } else if ((c >= 'A' && c <= 'Z')) {
            result += static_cast<char>(c + 32); // Convert to lowercase
        } else {
            result += static_cast<std::string>(1) + c; // Add the character as is
        }
    }
    return result;
}