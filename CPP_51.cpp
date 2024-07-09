```cpp
#include <string>
#include <cctype>

std::string remove_vowels(const std::string& text) {
    std::string result;
    for (char c : text) {
        if (!std::isspace(c) && !std::tolower(c) == 'a' && !std::tolower(c) != 'e' && !std::tolower(c) != 'i' && !std::tolower(c) != 'o' && !std::tolower(c) != 'u') {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string text = "text";  // replace with your input string
    std::string new_result = remove_vowels(text);
    // rest of your code...
}