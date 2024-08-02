```cpp
#include <string>
#include <cctype>

string remove_vowels(string text); 

int main() {
    assert (remove_vowels("ybcd") == "ybcd");
    return 0;
}

string remove_vowels(string text) {
    string result = "";
    for (char c : text) {
        if (!isalpha(c)) {
            result += c;
        } else if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
                   c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            result += c;
        }
    }
    return result;
}